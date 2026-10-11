class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1, zerocount = 0;
        for(int num : nums){
            if(num != 0)
                prod *= num;
            else zerocount++;
        }
        if(zerocount > 1){
            return vector<int>(nums.size(),0);
        }
        else{
            vector<int> product(nums.size());
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == 0){
                    product[i] = prod;
                }
                else{
                    if(zerocount != 1 )
                        product[i] = prod/nums[i];
                    else product[i] = 0;
                }
            }
            return product;

        }
        
    }
};
