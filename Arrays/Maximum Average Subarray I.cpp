class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0,mx=INT_MIN;
        int i=0,j=0,n=nums.size();

        while(j<n){
            sum=sum+ nums[j];

            if((j-i)+1< k)
               j++;

            else if((j-i)+1== k){
                mx=max(mx,sum);
                sum=sum-nums[i];
                i++;
                j++;
             }
        }
        return double(mx)/double(k);

    }
};
