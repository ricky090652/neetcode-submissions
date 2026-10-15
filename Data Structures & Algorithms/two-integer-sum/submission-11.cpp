class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> numSet;
        for(int i = 0; i < nums.size(); i++){
            numSet[nums[i]] = i;
        }
        unordered_set<int> umap(nums.begin(), nums.end());
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            int ans = target - nums[i];
            if((umap.count(ans))){
                if(i != numSet[ans] )
                    return {i,numSet[ans]};
            }
        }
    }
};
