class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rownum = matrix.size(), colnum = matrix[0].size();
        int r = rownum * colnum -1;
        int l = 0;

        while(l <= r){
            int mid = (l + r) / 2;
            int row = mid / colnum;
            int col = mid % colnum;

            if(target < matrix[row][col]){
                r = mid - 1;
            }
            else if(target > matrix[row][col]){
                l = mid + 1; 
            }
            else{
                return true;
            }
        }
        return false;
    }
};
