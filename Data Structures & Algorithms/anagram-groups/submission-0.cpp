class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> a;
        for(const auto& str : strs){
            string sortstr = str;
            sort(sortstr.begin(), sortstr.end());
            a[sortstr].push_back(str);
        }

        vector<vector<string>> output;
        for(const auto& s : a){
            output.push_back(s.second);
        }
        return output;

    }
};
