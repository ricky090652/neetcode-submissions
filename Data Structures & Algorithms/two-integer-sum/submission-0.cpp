class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            int j = target-nums[i];
            for(int k=i+1;k<nums.size();k++){
                if (j == nums[k]){
                    return {i,k};
                    //cout<<"["<<i<<","<<k<<"]";
                } 
            }
        }
    }
};
