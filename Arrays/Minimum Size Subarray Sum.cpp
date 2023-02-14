class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,n=nums.size();
        int mi=INT_MAX,sum=0;

       while(j<n){
           sum=sum+nums[j];

           if(sum<target)
               j++;
         
            else if(sum>=target){
                while(sum>=target){
                   sum=sum-nums[i];
                    // if(sum==target)
                        mi=min(mi,j-i+1);

                    i++;
                }
                j++;
            }
      
        }
      if(mi==INT_MAX)
        return 0;
        
    return mi;
        
    }
};
