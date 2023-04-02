class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
      
        int n=nums.size();
        //sorted bcz for any ith element, the pair for that element which will minimize the diff btw them is   the next elemnt i.e ith+1 element
    
        sort(nums.begin(), nums.end());

        int ans= nums[n-1]-nums[0];
         //ans will store the current min max diff 
        int smallest=nums[0]+k;   
        int largest=nums[n-1]-k;
        int mi,ma;

        for(int i=0;i<n-1;i++){
            mi=min(smallest, nums[i+1]-k);
            ma= max(largest, nums[i]+k);
            ans=min(ans, ma-mi);

            if(mi<0)    
               continue;
        }
        return ans;
        
    }
};
