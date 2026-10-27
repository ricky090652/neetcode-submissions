class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        unordered_set<string> operators = {"+", "-", "*", "/"};
        stack<int> cal;
//遇到operand就Push進stack，當遇到operator就pop兩次跟當下的operator運算，運算完再push進stack
        for(int i= 0; i < tokens.size(); i++){
            if(!operators.count(tokens[i])){
                cal.push(stoi(tokens[i]));
            }
            else{
                int right = cal.top();
                cal.pop();
                int left = cal.top();
                cal.pop();
                int result = 0;
                if(tokens[i] == "+"){
                    result = left + right;
                }
                else if(tokens[i] == "-"){
                    result = left - right;
                }
                else if(tokens[i] == "*"){
                    result = left * right;
                }
                else if(tokens[i] == "/"){
                    result = left / right;
                }
                cal.push(result);
            }
        }
        int ans = cal.top();
        return ans;


        

    }
};
