class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, comparator> pq;

        vector<vector<int>> res;
        //pair放index跟距離
        for(int i = 0; i < points.size(); i++){
            int distance = points[i][0]* points[i][0] + points[i][1]* points[i][1];
            pq.push(make_pair(i , distance));
        }

        for(int i = 0; i < k; i++){
            res.push_back(points[pq.top().first]);
            pq.pop();
        }

        return res;
    }

    struct comparator{
        bool operator()(pair<int, int> &a, pair<int, int> &b){
            int distA = a.second;
            int distB = b.second;
            return distA > distB;
        }
    };
};
