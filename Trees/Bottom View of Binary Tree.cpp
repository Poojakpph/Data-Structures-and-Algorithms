class Solution {
  public:
    vector <int> bottomView(Node *root) {
        
    //key point- we can't use recursive approach
        
       vector<int> ans;
        
        if(root==NULL)
          return ans;
        
        queue<pair<Node*, int>> q;  //stores node value and horizontal distance
        q.push({root,0});
        
        map<int,int> mp;  //stores horizontal distance and node value
        
        while(!q.empty()){
            int n=q.size();
            
            for(int i=0;i<n;i++){
                auto it=q.front();
                Node* temp=it.first;
                int hd=it.second;
                
               mp[hd]=temp->data;  //insert the node in the map
                 
                 
                if(temp->left)
                   q.push({temp->left, hd-1});
                
                if(temp->right)
                   q.push({temp->right, hd+1});
                   
               q.pop();
             }
             
        }
        
      for(auto it:mp){
          ans.push_back(it.second);
          
      }
        
  return ans;
        
    }
};
