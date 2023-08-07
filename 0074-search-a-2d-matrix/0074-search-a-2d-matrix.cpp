class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
     int rows= matrix.size();
        int cols= matrix[0].size();
        
        int i =0,j=cols-1;
        while (i<rows &&j>=0){
            if (matrix[i][j]==target)return 1;
            if (matrix[i][j]>target)j--;
            else i++;
        }
        return 0;
        
    }
};