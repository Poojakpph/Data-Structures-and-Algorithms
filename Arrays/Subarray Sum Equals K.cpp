 class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      
       unordered_map<int,int> mp;   //store prefixsum to it's corresponding array value and it's freq
       int count=0, psum=0;

       for(int i=0;i<nums.size();i++){
             psum+= nums[i];

            if(psum==k)
               count++;

            if(mp.find(psum-k)!= mp.end())
                  count= count+ mp[psum-k];
            
            mp[psum]++;   
       }

       return count;

    }
};
