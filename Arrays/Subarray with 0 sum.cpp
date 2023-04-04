class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //brute force
    //     int sum=-1;
    //     for(int i=0;i<n;i++){
    //         for(int j=i;j<n;j++){
    //             sum+=arr[j];
    //             if(sum==0)
    //                return true;
    //         }
    //       sum=0;
    //     }
        
    // return false;
    
    //optimized approach using prefix sum and map-
    //if sum is repeated more than 1 time in the prefix sum arr then it means that there exists some subarr in btw
    // which gives sum as 0
  
    map<int,int> mp;
    int sum=0;
    
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        
         if(arr[i]==0 || sum==0 || mp[sum])
            return true;
           
         mp[sum]++;
     }
     return false;
   
  
    }
};
