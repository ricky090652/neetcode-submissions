class KthLargest {
    int num ;
    vector<int> arr;
    priority_queue<int, vector<int>, greater<int>> pq;
public:
    KthLargest(int k, vector<int>& nums) {
        this->num = k;
        this->arr = nums;
        for(int num : nums){
            pq.push(num);
            if(pq.size() > k){
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > num){
            pq.pop();
        }
        return pq.top();
    }
};
