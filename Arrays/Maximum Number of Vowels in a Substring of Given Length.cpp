class Solution {
public:
    int maxVowels(string s, int k){   
        int i=0,j=0,n=s.length();
        int count=0,mx=INT_MIN;
        while(j<n){
            if(s[j]=='a' || s[j]=='e'|| s[j]=='i' || s[j]=='o' || s[j]=='u') 
               count++;

             if(j-i+1<k)
               j++;
               
            else if(j-i+1==k){
                mx=max(mx,count);

                if(s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o' || s[i]=='u') 
                    count--;

                i++;
                j++;
            }

        }
        return mx;
    }
};
