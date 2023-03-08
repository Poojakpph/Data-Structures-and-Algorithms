class Solution {
public:
    bool isSubsequence(string s, string t) {
          string temp="";
           int j=0;
   
        for(int i=0;i<t.length();i++){
            
           if(t[i]==s[j]){
                temp=temp+s[j];
                j++;
            }
         }

     if(temp==s)
          return true;
          
    return false;
        
    }
};
