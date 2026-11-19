class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int num : stones){
            pq.push(num);
        }
        
        while(pq.size() != 1 && pq.size() != 0){
            int max1 = pq.top();
            pq.pop();
            int max2 = pq.top();
            pq.pop();
            if(max1 != max2){
                pq.push(abs(max1 - max2));
            }
        }
        
        if(!pq.empty()){
            return pq.top();
        }
        else return 0;
    }
};
