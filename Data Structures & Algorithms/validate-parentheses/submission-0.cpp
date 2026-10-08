using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;//stack用來存左括號，每遇到一個右括號就跟stack最上面的去比較能不能對應
        unordered_map<char,char> closetoOpen = {
            {')','('},
            {'}','{'},
            {']','['}
        };
        for(char c : s){
            if(closetoOpen.count(c)){
                if(!stack.empty() && stack.top() == closetoOpen[c]){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
            else{
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
