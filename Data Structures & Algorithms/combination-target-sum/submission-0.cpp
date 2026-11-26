class Solution {
    vector<vector<int>> res;
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> subset;
        dfs(nums, target, subset, 0);
        return res;
    }
    
    void dfs(vector<int>& nums, int target, vector<int>& subset, int i){
        if(target == 0){
            res.push_back(subset);
            return;
        }
        if(i >= nums.size() || target < 0){
            return;
        }

        subset.push_back(nums[i]);
        dfs(nums, target - nums[i], subset, i);
        subset.pop_back();
        dfs(nums, target, subset, i + 1);
    }
};
