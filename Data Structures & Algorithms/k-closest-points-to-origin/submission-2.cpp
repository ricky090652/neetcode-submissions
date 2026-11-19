class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>, vector<vector<int>>, comparator> pq;
        for(int i = 0; i < points.size(); i++){
            pq.push(points[i]);
        }
        vector<vector<int>> res;
        for(int i = 0; i < k; i++){
            res.push_back(pq.top());
            pq.pop();
        }

        return res;
    }

    struct comparator{
        bool operator()(vector<int> &a, vector<int> &b){
            int distA = (a[0])*(a[0]) + (a[1])*(a[1]);
            int distB = (b[0])*(b[0]) + (b[1])*(b[1]);

            return distA > distB;
        }
    };
};
