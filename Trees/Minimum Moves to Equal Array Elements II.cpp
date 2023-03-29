class Solution {
public:
    int minMoves2(vector<int>& nums) {
     sort(nums.begin(), nums.end());
        int count=0;
        int n=nums.size();
        int mid;
        if(n%2!=0)  mid=n/2;
        else  mid=(n/2)-1;
      
    for(int i=0;i<mid;i++)
        count=count+abs(nums[mid]-nums[i]);
       
     for(int i=mid+1;i<n;i++)
        count=count+abs(nums[mid]-nums[i]);
        
     return count;

    }
};
