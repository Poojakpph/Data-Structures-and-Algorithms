class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row = mat.size();
		int sum=0;
		for(int i=0;i<row;i++){
			for(int j=0;j<row;j++){
				if(i==j || i+j==row-1){
					sum+=mat[i][j];
				}
			}
		}
		return sum;
        
    }
};
