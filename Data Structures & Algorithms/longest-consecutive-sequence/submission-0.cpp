class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int max_len = 1;
        int sum = 1;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] + 1 == nums[i+1]) {
                sum++;
            } 
            else if (nums[i] == nums[i+1]) {
                continue; 
            } 
            else {
                max_len = max(max_len, sum); 
                sum = 1; 
            }
        }

        return max(max_len, sum);
    }
};
