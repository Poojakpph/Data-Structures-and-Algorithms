class Solution {
public:  
    
    
    bool subsetsum(vector<int>& nums, int sum){ 
        int n=nums.size();
        int dp[n+1][sum+1];    //declare
       
       for(int i=0;i<n+1;i++){    //initialization
           for(int j=0;j<sum+1;j++){
                if(i==0)
                    dp[i][j]=false;
                if(j==0)
                   dp[i][j]=true; 
            }       
       }

      for(int i=1;i<n+1;i++){      //processing
           for(int j=1;j<sum+1;j++){ 
               if(nums[i-1]<=j)
                   dp[i][j]= (dp[i-1][j-nums[i-1]]) || (dp[i-1][j]);
                
                else
                   dp[i][j]= dp[i-1][j];

           }
        }

   return dp[n][sum];
 }
  
 bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
           sum+=nums[i];
        
        if(sum%2!=0)    //in odd sum case it's not possible to divide nums sum into two equal subset's sum 
           return false;
        
        else{
            return subsetsum(nums,sum/2);
        }
        
    }
};
