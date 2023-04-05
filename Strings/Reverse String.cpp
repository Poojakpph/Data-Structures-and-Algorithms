class Solution {
public:
    void reverseString(vector<char>& s) {
      // reverse(s.begin(),s.end());    //1st way
      
       //2nd way
        int start=0;        
        int end=s.size()-1;
        while(start<end){
            swap(s[start], s[end]);
            start++;
            end--;
        }
        
      //3rd way
      for(int i=0;i<s.size()/2;i++){
            swap(s[i],s[s.size()-i-1]);
        }
        
    }
};


  //4th way-recursion
    void reverse(vector<char>& str, int start, int end){
        if(start>=end)
          return;
          
        swap(str[start],str[end]);
        reverse(str,start+1,end-1);
    }
   void reverseString(vector<char>& s) {
      reverse(s,0,s.size()-1);
   }
    
