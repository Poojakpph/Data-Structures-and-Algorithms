class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int>v;
        int row=matrix.size();
        int col=matrix[0].size();
        
        int count=0;
        int total=row*col;
        
        // index intitalization
        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;   
        
   while(count<total){
       
            //print starting row
            for(int i=startingCol; count<total && i<=endingCol; i++){
                v.push_back( matrix[startingRow][i] );
                count++;
            }
            startingRow++;
            
            //print last col
            for(int i=startingRow; count<total &&  i<=endingRow; i++){
                v.push_back( matrix[i][endingCol] );
                count++;
            }
            endingCol--;
            
             //print last row
            for(int i=endingCol;  count<total && i>=startingCol; i--){
                v.push_back( matrix[endingRow][i] );
                count++;
            }
            
            endingRow--;
            
             //print starting col
            for(int i=endingRow;  count<total && i>=startingRow; i--){
                v.push_back( matrix[i][startingCol] );
                count++;
            }
            startingCol++;
            
      }
        
  return v;
        
    }
};
