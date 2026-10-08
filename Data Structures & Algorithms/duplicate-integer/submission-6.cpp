class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int i = 1; i < nums.size() ;i++){
            seen.insert(nums[i-1]);
            if(seen.count(nums[i]))
                return true;
        }
        return false;
    }
};