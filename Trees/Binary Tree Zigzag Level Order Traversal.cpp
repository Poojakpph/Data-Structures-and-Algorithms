class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) 
             return ans;

        queue<TreeNode*> q;
        q.push(root);
        int lvl=0;  // to traverse the levels

      while(!q.empty()){
            int n=q.size();
            vector<int> v;

            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();

                if(node->left)
                   q.push(node->left);

                if(node->right)
                   q.push(node->right);

                v.push_back(node->val);

            }
         if(lvl%2 !=0)   //odd level
              reverse(v.begin(), v.end());

          lvl++;

          ans.push_back(v);  

        }

      return ans;
        
    }
};
