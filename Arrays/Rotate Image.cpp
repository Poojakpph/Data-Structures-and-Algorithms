class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         // concept
        // take transpose then reverse each row of the matrix
        // optimized solution
        
        
        int m=matrix.size();
        int n=matrix[0].size();
        
        for(int i=0; i<m;i++){
            for(int j=i; j<m; j++){
                  swap(matrix[i][j], matrix[j][i]);
            }
        }
        
         for(int i=0; i<m;i++){
             reverse(matrix[i].begin(), matrix[i].end());
         }
        
    }
};
