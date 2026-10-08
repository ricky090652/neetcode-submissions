class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t mask = 1;
        int sum = 0;
        for(int i=0;i<32;i++){
            uint32_t a = mask & n;
            if (a==1) sum++;
            n = n >> 1; 
        }
        return sum;
    }
};
