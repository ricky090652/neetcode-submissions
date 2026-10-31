class Solution {
public:
    int search(vector<int>& nums, int target) {
         int l = 0, r = nums.size() - 1;

        while (l < r) {
            int m = (r + l) / 2;

            if (nums[m] > nums[r]) {
                l = m + 1;
            } 
            else {
                r = m;
            }
        }
        int pivot = l;
        int left = 0, right = 0;

        if(target >= nums[pivot] && target <= nums[nums.size() - 1]){
            left = pivot;
            right = nums.size() - 1;
        }
        else{
            left = 0;
            right = pivot - 1;
        }

        while(left <= right){
            int m = (left + right) / 2;
            if(target == nums[m]){
                return m;
            }
            if(target > nums[m]){
                left = m + 1;
            }
            else{
                right = m - 1;
            }
        }
        return -1;
        
    }


};
