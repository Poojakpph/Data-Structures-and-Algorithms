class Solution{

  public:
    
	int minDifference(int arr[], int n)  { 
	     
	    int sum=0;
	   for(int i=0;i<n;i++)
	      sum+=arr[i];
	     
	     int dp[n+1][sum+1];   //declare 
	     
	    // initialization of table
	    for(int i=0;i<n+1;i++){
	         for(int j=0;j<sum+1;j++){
	             if(i==0)
	                 dp[i][j]=0;
	                 
	              if(j==0)
	                 dp[i][j]=1;
	         }
	    }
	    
	    //processing
	      for(int i=1;i<n+1;i++){
	         for(int j=1;j<sum+1;j++){
	            if(arr[i-1]<=j)
	               dp[i][j]=(dp[i-1][j-arr[i-1]]) || (dp[i-1][j]);
	               
	            else if(arr[i-1]>j)
	                 dp[i][j]=dp[i-1][j];
	         }
	    }
	   
	   int ans=INT_MAX;
	   for(int j=0;j<sum+1;j++){   //Iterating last row where the sum exists
	       if(dp[n-1][j]==1)
	          ans=min(ans, abs(sum-2*j)); // abs(sum - 2*(subset_sum) will give subset sum difference
	   }
	   
	   return ans;
	} 
};
