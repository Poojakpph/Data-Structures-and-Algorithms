class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //tc= O(NlogN)
    //     int n=r+1;
    //     sort(arr, arr+n);
        
    //   return arr[k-1];
    
    
    //optimized approach- using priority queue
    //using max heap
   
    priority_queue<int> pq;  
    
    for(int i=0;i<k;i++) 
       pq.push(arr[i]);
          
    for(int i=k;i<r+1; i++){
         if(arr[i]<pq.top()){
             pq.pop();
             pq.push(arr[i]);
         }
    }
             
   return pq.top();
   }
    
};
