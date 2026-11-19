class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        int ans = 0;
        for(int num : nums){
            pq.push(num);
            if(pq.size() > nums.size() - k + 1){
                pq.pop();
            }
        }
        return pq.top();
    }
};
