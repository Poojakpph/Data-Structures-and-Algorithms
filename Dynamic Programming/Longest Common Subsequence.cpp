class Solution {
public:
  //recursive approach - TLE
  // TC= O(2^l1 * 2^ l2) ---> approx exponential
  // int f(int idx1, int idx2, string& text1, string& text2){
  //     //base case
  //     if(idx1<0 || idx2<0)   
  //        return 0;
      
  //     if(text1[idx1]== text2[idx2])  //if characters matches 
  //         return 1+ f(idx1-1, idx2-1, text1, text2);

  //   return 0+ max(f(idx1-1, idx2, text1, text2), f(idx1, idx2-1, text1, text2));  //if characters doesn't matches 

  //   }

  //   int longestCommonSubsequence(string text1, string text2) {
  //       int l1=text1.length();
  //       int l2=text2.length();
  //       return f(l1-1, l2-1, text1, text2);
  //   }


//optimized approach- memoization
//TC= O(l1* l2)
//SC= O(l1* l2) + O(l1+l2)- (auxiliary stack space)
//   int f(int idx1, int idx2, string& text1, string& text2,  vector<vector<int>>& dp){
//         //base case
//         if(idx1<0 || idx2<0)  return 0;

//         if(dp[idx1][idx2]!=-1)  return dp[idx1][idx2];   

//         if(text1[idx1]== text2[idx2])  //if characters matches 
//             return dp[idx1][idx2]= 1+ f(idx1-1, idx2-1, text1, text2, dp);

//        //if characters doesn't matches 
//       return dp[idx1][idx2]= 0+ max(f(idx1-1, idx2, text1, text2, dp), f(idx1, idx2-1, text1, text2, dp));  

//    }

//     int longestCommonSubsequence(string text1, string text2) {
//         int l1=text1.length();
//         int l2=text2.length();
//         vector<vector<int>> dp(l1, vector<int>(l2,-1));   // dp vector
//         return f(l1-1, l2-1, text1, text2, dp);
//     }
// };


//optimized approach - Tabulation- remove auxiliary space 
//TC= O(l1* l2)
//SC= O(l1* l2) 
//shifting of the index concept applied - '-1' is considered as 0 now i.e. right shift each by 1
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length();
        int n=text2.length();
        // vector<vector<int>> dp(m+1, vector<int>(n+1, 0));   //dp vector
        int dp[m+1][n+1];

        //initialization
        for(int i=0;i<=m; i++)  dp[i][0]=0;
        for(int j=0;j<=n; j++)  dp[0][j]=0;
       
       //processing
        for(int i=1;i<=m; i++)  {
           for(int j=1;j<=n; j++){
                if(text1[i-1]== text2[j-1])  //if characters matches 
                    dp[i][j]= 1 + dp[i-1][j-1];

                //if characters doesn't matches 
                else
                    dp[i][j]= 0+ max(dp[i-1][j], dp[i][j-1]);  
             }
         }

    return dp[m][n];
       
    }
};

