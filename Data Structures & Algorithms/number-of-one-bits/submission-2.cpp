class Solution {
public:
    int hammingWeight(uint32_t n) {
        int sum = 0;
        for(int i=0;i<32;i++){
            if (1 & n) sum++;
            n = n >> 1; 
        }
        return sum;
    }
};
