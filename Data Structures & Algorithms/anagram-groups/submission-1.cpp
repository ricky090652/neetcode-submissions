class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>> umap;
        vector<string> ana = strs;
        for(int i = 0 ;i < strs.size(); i++){
            sort(strs[i].begin(), strs[i].end());
            umap[strs[i]].push_back(ana[i]);
        }
        for(auto it : umap){
            result.push_back(it.second);
        }
        return result;
    }
};
