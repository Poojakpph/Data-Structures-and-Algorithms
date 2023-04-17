class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {  //main fucn
       int visited_arr[V]={0};
       visited_arr[0]=1;
       vector<int> ans;
       
       queue<int> q;
       q.push(0);
       
      while(!q.empty()){
         int node=q.front();
         q.pop();
         ans.push_back(node);
         
            for(auto it : adj[node]){
                if(!visited_arr[it]){
                    q.push(it);  //insert that particular node in the queue
                    visited_arr[it]=1;  //then mark visited i.e as 1
                }
            }
        }  
  return ans;
       
    }
};
