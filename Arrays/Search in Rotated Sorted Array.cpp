class Solution {
public:

 int pivot(vector<int>& nums){    // to find pivot
       int s=0;
       int e=nums.size()-1;
       int mid=(s+e)/2;

     while(s<e){
         if(nums[mid]>=nums[0])
             s=mid+1;
        else
           e=mid;

    mid=(s+e)/2;          
       }

   return s;
 }

int binsearch(vector<int>& nums, int start, int end, int target){   // binary search
       int s=start;
       int e=end;
       int mid=(s+e)/2;

     while(s<=e){
         if(nums[mid]<target)
             s=mid+1;
        else if(nums[mid]>target)
             e=mid-1;
        else
           return mid;

    mid=(s+e)/2;          
       }

   return -1;
 }

    int search(vector<int>& nums, int target) {  
// TC-O(logn) -optimized approach 
// approach- find pivot 
 // if(target lies in btw nums[pivot] and nums[n-1]) then it lies in rightsubarray - now we know where to apply binary search
 // similary for we can check for leftsubarray
        int n=nums.size();
    int pvt= pivot(nums);
   if(target>= nums[pvt] && target<= nums[n-1])
          return binsearch(nums, pvt ,n-1, target);
    else  
         return binsearch(nums, 0, pvt-1 ,target);
    }
};
