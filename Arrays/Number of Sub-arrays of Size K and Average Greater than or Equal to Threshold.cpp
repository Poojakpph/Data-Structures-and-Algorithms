class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0,j=0,n=arr.size(),sum=0,count=0;
        float avg;

        while(j<n){
            sum=sum+ arr[j];
            if(j-i+1<k)  
                 j++;

            else if(j-i+1==k){
                avg=sum/k;
                if(avg>=threshold) count++;
                sum=sum-arr[i];
                i++;
                j++;
              }
        
        }
      return count;
    }
};
