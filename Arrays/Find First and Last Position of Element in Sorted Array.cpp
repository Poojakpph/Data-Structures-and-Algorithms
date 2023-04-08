class Solution {
public:
// TC=O(logn) - Binary search 
int starting(vector<int>& nums, int target){   // fun for leftmost or starting index
     int s=0;
     int e=nums.size()-1;
     int mid=(s+e)/2;
     int ans=-1;

   while(s<=e){
      if(nums[mid]==target){
            ans=mid;
            s=mid+1;
         }
      else if(nums[mid]>target)  e=mid-1;
      else   s=mid+1;
   
   mid=(s+e)/2;    
     }
     return ans;
 }
     
int ending(vector<int>& nums, int target){   // fun for rightmost or ending index
     int s=0;
     int e=nums.size()-1;
     int mid=(s+e)/2;
     int ans=-1;
   while(s<=e){
      if(nums[mid]==target){
            ans=mid;
            e=mid-1;
         }
      else if(nums[mid]>target)  e=mid-1;
      else   s=mid+1;
   
   mid=(s+e)/2;    
     }
     return ans;
 }
    vector<int> searchRange(vector<int>& nums, int target) { // main func
      int st=starting(nums,target);
      int ed=ending(nums,target);
      vector<int> v;
      v.push_back(st);
      v.push_back(ed);
      sort(v.begin(), v.end());
       return v;
        
    }
};
