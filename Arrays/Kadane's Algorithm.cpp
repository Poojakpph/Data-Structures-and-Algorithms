long long maxSubarraySum(int arr[], int n){
     //brute force TC=O(N*N)   
    //   int maxsum=INT_MIN;
       
    //   for(int i=0;i<n;i++){
    //       int currsum=0;
          
    //       for(int j=i;j<n;j++){
    //           currsum+=arr[j];
    //           maxsum=max(maxsum, currsum);
     
    //          } 
    //   }
      
    //   return maxsum;
    
    
    //optimized- kadane's algo
    //TC=O(N) SC=O(1)
    long long int maxsum=INT_MIN;
    long long int currsum=0;
    
    for(int i=0;i<n;i++){
        currsum=currsum+arr[i];
        
        if(currsum>maxsum)
            maxsum=currsum;
        
        if(currsum<0)
           currsum=0;
     }
     
    return maxsum;
        
    }
};
