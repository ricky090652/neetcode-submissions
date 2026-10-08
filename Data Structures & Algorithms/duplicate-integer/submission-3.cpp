class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int sum = 0;
        for (int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]){
                    sum++;
                }
            }
            if(sum!=0) return true;
        }
        if(sum!=0) return true;
        else return false;
    }
};