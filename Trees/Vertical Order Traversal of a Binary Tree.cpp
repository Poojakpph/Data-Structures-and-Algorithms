class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int,vector<int> >> mp;
        vector<vector<int>> ans;
        if(root==NULL)
          return ans;
       
       queue< pair<TreeNode*, pair<int,int>> > q;
       q.push({root,{0,0} });

       while(!q.empty()){
         int n=q.size();

         for(int i=0;i<n;i++){
             pair<TreeNode*, pair<int,int>> temp= q.front();
             TreeNode* node= temp.first;
             int hd= temp.second.first;
             int lvl=temp.second.second;
              q.pop();

             if(node->left)
               q.push({node->left, {hd-1, lvl+1}});

            if(node->right)
               q.push({node->right, {hd+1, lvl+1}});

            mp[hd][lvl].push_back(node->val);
         }

       }

     for(auto it:mp){
         vector<int> v;
         for(auto t: it.second){
             sort(t.second.begin(), t.second.end());
             for(auto m:t.second){
                 v.push_back(m);
               }
          }
         ans.push_back(v);
     }
     return ans;
    }
};
