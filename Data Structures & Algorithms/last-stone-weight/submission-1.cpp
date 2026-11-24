class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(int num : stones){
            q.push(num);
        }
        while(q.size() > 1){
            int max1 = q.top();
            q.pop();
            int max2 = q.top();
            q.pop();
            if(max1 != max2){
                q.push(abs(max1 - max2));
            }
        }
        if(q.size() == 1){
            return q.top();
        }
        else return 0;
    }
};
