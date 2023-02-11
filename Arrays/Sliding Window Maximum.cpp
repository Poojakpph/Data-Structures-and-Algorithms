class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0,j=0,n=nums.size();
        vector<int> ans;
        list<int> l;

        while(j<n){
            // calculation part
            while(l.back()<nums[j] && l.size()>0){
                l.pop_back();
            }
            l.push_back(nums[j]);

            if(j-i+1<k)
               j++;

            else if(j-i+1==k){
                ans.push_back(l.front());
                 // before sliding the window(i++,j++) we've to check first that nums[i] is present in the list or not
                // if it's present then it will lie in the front of the list only
                if(nums[i]==l.front())
                    l.pop_front();

                i++;
                j++;

            }

        }
        return ans;
