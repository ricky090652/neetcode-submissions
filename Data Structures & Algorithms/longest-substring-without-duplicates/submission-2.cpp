class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> uset;
        int l = 0;
        int res = 0;
        for(int i = 0; i < s.size(); i++){
            while(uset.count(s[i])){
                uset.erase(s[l]);
                l++;
            }
            uset.insert(s[i]);
            res = max(res,i-l+1);
        }
        return res;
    }
};
