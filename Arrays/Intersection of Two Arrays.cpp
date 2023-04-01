class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       set<int> s;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n1 = nums1.size();
        int n2=nums2.size();
        int i=0,j=0;

    while(i<n1 && j<n2){
         if(nums1[i]>nums2[j])
                j++;
                 
         else if(nums1[i]<nums2[j]){
                i++;
            }
            else{     //nums1[i]==nums2[j]
                s.insert(nums1[i]);   //bcz for unique element inserting in a set
                i++;
                j++;
            }
        }
 
    vector<int>v;
    for(auto i : s){
        v.push_back(i);
    }
       
    return v;
        
    }
};
