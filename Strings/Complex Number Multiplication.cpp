class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        string ans="";
        int r1,r2,i1,i2;
        int n1=num1.size();
        int n2=num2.size();

        for(int i=0;i<n1;i++){
            if(num1[i]=='+'){
              r1=stoi(num1.substr(0,i));
              i1=stoi(num1.substr(i+1,n1-i));
            }
        }

          for(int i=0;i<n2;i++){
            if(num2[i]=='+'){
               r2=stoi(num2.substr(0,i));
               i2=stoi(num2.substr(i+1,n2-i));
            }
        }

      int real=(r1*r2) - (i1*i2);
      int img=(r1* i2) + (r2*i1);

      ans= ans + to_string(real) + "+" + to_string(img) + "i";
      return ans;  
        
    }
};
