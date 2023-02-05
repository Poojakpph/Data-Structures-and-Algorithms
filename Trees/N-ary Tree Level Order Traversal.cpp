class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        vector<vector<int>> ans;
        if(root==NULL) return {};
        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            int n=q.size();
            vector<int> v;
            for(int i=0;i<n;i++){
               Node* node=q.front();
               q.pop();
               v.push_back(node->val); 
              for(int i=0;i<node->children.size();i++)   // key part of accessing children nodes attached to a parent node
                    q.push(node->children[i]);

          }

       ans.push_back(v);   
     }

     return ans;
        
    }
};
