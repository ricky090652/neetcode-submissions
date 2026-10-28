class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        stack<pair<int, int>> stk;//{index, value}

        for(int i = 0; i < temperatures.size(); i++){
            int t = temperatures[i];
            while(!stk.empty() && t > stk.top().second){
                auto pairs = stk.top();
                stk.pop();
                int tmp = i - pairs.first;
                res[pairs.first] = tmp; 
            }
            stk.push({i, t});
        }
        return res;
    }
};
