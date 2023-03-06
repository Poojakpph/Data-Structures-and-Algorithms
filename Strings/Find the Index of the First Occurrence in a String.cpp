class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size())  
             return -1;

        int i=0;
        int j=0;
        int index=0;
        while(i<haystack.size() && j<needle.size()){
            if(haystack[i]==needle[j]){
                i++;
                j++;
             }
            else{
                index++;
                i=index;
                j=0;
             }
        }
        if(j==needle.size())
           return index;
           
    return -1;
        
    }
};
