class Solution {
public:

  // intution- reverse the string 
  // after reversing , this is reduced to same problm as longest common subsequence 
  // this is bound to give palindromic subsquence since we've reversed it at starting
//TC= O(m* n)
//SC= O(m* n)+ O(m+n)- (auxiliary stack space)
    int f(int idx1, int idx2, string& s, string& rev, vector<vector<int>>& dp){
        //base case
        if(idx1<0 || idx2<0)  return 0;

         if( dp[idx1][idx2]!=-1)  return  dp[idx1][idx2];
        if(s[idx1]==rev[idx2])  //if character matches
          return dp[idx1][idx2]= 1+ f(idx1-1, idx2-1, s, rev, dp);
        
        //if characters doesn't matches 
        return dp[idx1][idx2]=  max(f(idx1-1, idx2, s, rev, dp), f(idx1, idx2-1, s, rev, dp));
    }

    int longestCommonSubseq(string s, string rev){
      int m=s.length();
      int n=rev.length();
      vector<vector<int>> dp(m, vector<int>(n,-1));   // dp vector
      return f(m-1, n-1, s, rev, dp);
    }

    int longestPalindromeSubseq(string s) {  //main func
    string rev="";
    for(int i=s.length(); i>=0; i--)   //string reversed
       rev=rev+ s[i];
  
      return longestCommonSubseq(s, rev); 
        
    }
};
