class Solution {
public:
    int singleNumber(vector<int>& nums) {
 sort(nums.begin(), nums.end());
        int count = 0, i;
        for(i = 0; i < nums.size() - 1; i++) {
            if(nums[i] == nums[i + 1]) count++;
            else {
                  if(count == 0) {
                      
                    return nums[i];
                  }
                count=0;
            }
        }
        return nums[i];
    } 
};
