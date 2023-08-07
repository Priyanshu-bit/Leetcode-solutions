class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty()) return 0;
     int m= matrix.size();
        int n= matrix[0].size();
        
     int  low = 0;
        int hi= (m*n)-1;
        
        while (low<=hi){
            int mid = (low +hi)/2;
            if (matrix[mid/n][mid%n]==target) return 1;
            if  (matrix[mid/n][mid%n]>target) hi= mid-1;
            else low= mid+1;
        }
        
        return 0;
    }
};