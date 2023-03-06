class Solution {
public:
    string convert(string s, int numRows) {
        int n=numRows;
         string ans="";
         if(n==1)
            return s;
        vector<string> a(n);
        int k=0,i=0;

        while(k<s.size()){
            while(i<n && k<s.size()) 
                a[i++] += s[k++];

            i=i-2;

            while(i>=1 && k<s.size()) 
                a[i--] += s[k++];
        }
       
        for(auto &x:a) 
            ans+=x;
     return ans;
        
    }
};
