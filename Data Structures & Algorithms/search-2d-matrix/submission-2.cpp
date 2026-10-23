class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rownum = matrix.size();
        int colnum = matrix[0].size();

        if(rownum == 0 && colnum == 0){
            return false;
        }

        int lrow = 0, rrow = rownum - 1, currow = (rrow + lrow) / 2;
        int lcol = 0, rcol = colnum - 1, curcol = (rcol + lcol) / 2;
        int row = 0, col = 0;
        while(lrow <= rrow){
            if(target > matrix[currow][colnum-1]){
                lrow = currow + 1;
            }
            else if(target < matrix[currow][0]){
                rrow = currow - 1;
            }
            else{
                row = currow;
                break;
            }
            currow = (rrow + lrow)/ 2;
        }
        while(lcol <= rcol){
            if(target > matrix[row][curcol]){
                lcol = curcol + 1;
            }
            else if(target < matrix[row][curcol]){
                rcol = curcol - 1;    
            }
            else if(target == matrix[row][curcol]){
                return true;
            }
            curcol = (rcol + lcol) / 2;
        }
        return false;
    }
};
