class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> ss,tt;
        for(int i=0;i<s.length();i++){
            ss.push_back(int(s[i]));
        }
        for(int i=0;i<t.length();i++){
            tt.push_back(int(t[i]));
        }
        if(ss.size() == tt.size()){
            sort(ss.begin(),ss.end());
            sort(tt.begin(),tt.end());
            if(tt == ss) return true;
            else return false;
        }

        return false;
    }
};
