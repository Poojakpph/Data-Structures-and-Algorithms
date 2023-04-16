class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(int node, vector<int> adj[], int visited_arr[] ,vector<int> &ans){
        visited_arr[node]=1;
        ans.push_back(node);  //add the particular node in the ans vector
        
        //now we traverse all it's (for that particular node) neighbours node
        for(auto it: adj[node]){
            if(!visited_arr[it])   //if the node is unvisited then only we will traverse that node
                 dfs(it, adj, visited_arr, ans);
        }
        
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        int visited_arr[V]={0};
        int start=0;  //given starting from the 0th vertex
        
        vector<int> ans;
        dfs(start, adj, visited_arr, ans);
        return ans;
    }
};
