class MinStack {
public:
    stack<int> stk;
    vector<int> res;
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        res.push_back(val);
    }
    
    void pop() {
        stk.pop();
        res.pop_back();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        auto it = min_element(res.begin(), res.end());
        return *it;
    }
};
