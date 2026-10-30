class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;

        while (l < r) {
            int m = l + (r - l) / 2;

            // 跟右邊界比：如果中點比右邊大，代表旋轉點一定在右半邊
            if (nums[m] > nums[r]) {
                l = m + 1;
            } 
            // 否則最小值就在左半邊（包含 m 本身）
            else {
                r = m;
            }
        }
        return nums[l];
    }
};