class Solution {
public:

    int majorityElement(vector<int>& nums) {
        int count=0;
        
        if(nums.size()==1)    // if the no of elements are only 1
               return nums[0];
         
        
        sort(nums.begin(),nums.end());   // sort the array
        
        for(int i=0;i<nums.size();i++){
              if(nums[i]!=nums[i+1]){
                  count=0;
                  continue;
                }
        
          count++;
          
             if(count>=nums.size()/2)  
               return nums[i];
              
        return 0;
        
    }
};
