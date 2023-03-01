class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,n=s.length();
        int mx=0;
    
        map<char,int> mp;
        while(j<n){
            mp[s[j]]++;

            if(mp.size()>j-i+1)   //this condition will never hit
               j++;

            else if(mp.size()==j-i+1){
                mx=max(mx,j-i+1);
                j++;
            }

            else if(mp.size()<j-i+1) {       
                while(mp.size()<j-i+1){
                    mp[s[i]]--;

                    if(mp[s[i]]==0)
                        mp.erase(s[i]);

                  i++;
                }
               j++;
            }

        }
    return mx;

    }
};
