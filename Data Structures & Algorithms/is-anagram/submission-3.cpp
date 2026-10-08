class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> letter(26,0);
        if (s.length() != t.length()) return false;
        for(int i=0;i<s.length();i++){
            letter[s[i]-'a']++;
            letter[t[i]-'a']--;
        }
        for(int val : letter){
            if(val!=0) return false;
        }
        return true;
    }
};
