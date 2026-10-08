class Solution {
public:
    bool isPalindrome(string s) {
        string a = "";
        for(int i=0;i<s.size();i++){
            if(!((int(s[i]) <= 122 && int(s[i]) >= 97) || (int(s[i]) <= 90 && int(s[i]) >= 65) || (int(s[i]) <= 57 && int(s[i]) >= 48))){
                continue;
            }
            a += tolower(s[i]);
        }
        int middle = a.size()/2;
        int count = 0;
        if(a.size() % 2 == 1){
            for(int i=0;i<middle;i++){
                if(a[middle-1-i] == a[middle+1+i]){
                    count++;
                }
            }
            if(count == middle) return true;
            else return false;
        }
        else{
            for(int i=0;i<middle;i++){
                if(a[middle-i-1] == a[middle+i]){
                    count++;
                }
            }
            if(count == middle) return true;
            else return false;
        }
        
    }
};
