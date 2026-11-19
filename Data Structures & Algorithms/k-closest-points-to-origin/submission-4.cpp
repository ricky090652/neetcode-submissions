class Solution {
public:
    struct comparator {
        bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
            int distA = a.second;
            int distB = b.second;
            return distA < distB;
        }
    };

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, comparator> pq;
        vector<vector<int>> res;

        for (int i = 0; i < points.size(); i++) {
            int distance = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            pq.push(make_pair(i, distance));

            if (pq.size() > k) {
                pq.pop();
            }
        }

        while (!pq.empty()) {
            res.push_back(points[pq.top().first]);
            pq.pop();
        }

        return res;
    }
};