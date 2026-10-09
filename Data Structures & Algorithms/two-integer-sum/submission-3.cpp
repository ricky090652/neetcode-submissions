class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> A;
        for(int i = 0; i < nums.size(); i++){
            A.push_back({nums[i], i});
        }
        sort(A.begin() , A.end());

        int i = 0;
        int j = nums.size()-1;
        for(int k = 0 ; k < nums.size(); k++){
            if(A[i].first + A[j].first == target)
                if(A[i].second > A[j].second)
                    return {A[j].second , A[i].second};
                else return {A[i].second , A[j].second};
            else if (A[i].first + A[j].first < target)
                i++;
            else 
                j--;
        }
    }
              
};
