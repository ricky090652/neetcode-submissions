class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> count(n+1);
        for(int i=0;i<=n;i++){
            int sum = 0;
            int temp = i;
            while(temp > 0){
                if(temp & 1 == 1) sum++;
                temp = temp >> 1;
            }
            count[i] = sum;
        }
        return count;
    }
};
