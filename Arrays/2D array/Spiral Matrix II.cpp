class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>>ans(n, vector<int>(n, 0));

        int minRow=0, minCol = 0;
        int maxRow=n-1,maxCol=n-1;
        int total=n*n;
        int count=0;

        while(count < total){
            // filling the top wall
            for(int i=minRow, j=minCol; j<=maxCol && count < total; j++){
                ans[i][j] = count+1;
                count++;
            }
            minRow++;

            // filling the right wall
            for(int i=minRow, j=maxCol; i<=maxRow && count<total; i++){
                ans[i][j] = count+1;
                count++;
            }
            maxCol--;

            // filling the bottom wall
            for(int i=maxRow, j=maxCol; j>=minCol && count<total; j--){
                ans[i][j] = count+1;
                count++;
            }
            maxRow--;

            // filling the left wall
            for(int i=maxRow, j=minCol; i>=minRow && count<total; i--){
                ans[i][j] = count+1;
                count++;
            }
            minCol++;
        }

        return ans;
        
    }
};
