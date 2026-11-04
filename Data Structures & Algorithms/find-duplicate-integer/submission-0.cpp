class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> uset;
        for(int num : nums){
            if (!uset.count(num)){
                uset.insert(num);
            }
            else{
                return num;
            }
        }
    }
};
