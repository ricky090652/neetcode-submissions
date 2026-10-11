class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> f;
        for(int i = 0; i < nums.size(); i++){
            f[nums[i]]++;
        }
        vector<pair<int, int>> items(f.begin(), f.end());
        sort(items.begin(), items.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

        vector<int> ans;
        for (int i = 0; i < k; ++i) {
            ans.push_back(items[i].first);
        }
        return ans;
    }
};
