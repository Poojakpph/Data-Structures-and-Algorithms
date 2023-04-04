class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    { 
    
     //sort the array
      sort(A, A+n);
       
      // approach- we will search for pair b and c in the array such that b+c==X-a
      //start from i=0 i.e A[0]=a then search for b and c such that b+c==X-A[0] in the array
      // similarly do for A[1], A[2]....A[n-1]
      
        for(int i=0;i<n;i++){
              int y=X-A[i];
              int low=i+1;
              int high=n-1;
              
              while(low<high){
                  if(A[low]+A[high]>y)
                     high--;
                     
                  else if(A[low]+A[high]<y)
                     low++;
                    
                  else  //A[low]+A[high]==X
                     return true;
              }
         
         }
         
   return false;
      
    }

};
