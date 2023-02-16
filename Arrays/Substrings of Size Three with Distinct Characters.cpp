class Solution {
public:
    int countGoodSubstrings(string s) {
        //brute force
        //  int n=s.size(),count = 0;
        // for(int i=1;i<n-1;i++){
        //     if(s[i-1]!= s[i] and s[i+1]!= s[i] and s[i+1]!= s[i-1]) 
        //          count++;
        // }

        // return count;

        //sliding window
        int i=0,j=0,n=s.size(),count=0;
        map<char,int> mp;
        while(j<n){

            mp[s[j]]++;

            if(j-i+1<3)
               j++;

            else if(j-i+1==3){
                if(mp.size()==3)
                   count++;

                mp[s[i]]--;

                if(mp[s[i]]==0)
                   mp.erase(s[i]);

                i++;
                j++;
            }
           
        }
     return count;
        
    }
};
