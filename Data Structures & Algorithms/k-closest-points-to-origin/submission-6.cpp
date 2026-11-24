class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        struct comparator{
            bool operator()(pair<int, int> &a, pair<int, int> &b){
                return a.second < b.second;
            }
        };

        priority_queue<pair<int, int>, vector<pair<int, int>>, comparator> pq;
        
        for(int i = 0; i < points.size(); i++){
            int dist = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            pq.push({i, dist});
            if(pq.size() > k){
                pq.pop();
            } 
        }
        vector<vector<int>> res;
        for(int i = 0; i < k; i++){
            res.push_back(points[pq.top().first]);
            pq.pop();
        }
        return res;
    }
};
