class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> test;
        test.assign(nums.begin(), nums.end());
       // int count = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i] == test[j]){
                    if(i==j) continue;
                    return true;
                }
            }
        }
        return false;
    }
};