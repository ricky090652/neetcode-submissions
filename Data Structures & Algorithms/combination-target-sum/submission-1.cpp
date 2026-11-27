class Solution {
    vector<vector<int>> res;
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> subset;
        dfs(nums, subset, 0, target);
        return res;
    }

    void dfs(vector<int> &nums, vector<int> &subset, int i, int target){
        if(target == 0){//不能寫target == nums[i]，這樣會少push到最後一個元素，當target=0代表目前subset內的元素總和等於原target
            res.push_back(subset);
            return;
        }
        
        if(i >= nums.size() || target < 0){
            return;
        }

        subset.push_back(nums[i]);
        dfs(nums, subset, i, target - nums[i]);
        subset.pop_back();
        dfs(nums, subset, i + 1, target);
    }
};
