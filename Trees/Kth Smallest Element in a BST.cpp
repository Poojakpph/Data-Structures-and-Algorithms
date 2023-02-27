class Solution {
public:

    vector<int> fun(TreeNode* root){   //self made func
         if(root==NULL)
          return {};

        vector<int> v;
        fun(root->left);
        fun(root->right);
        v.push_back(root->val);

    return v;
    
    }

 //tc=O(NlogN) and SC=O(N)
    int kthSmallest(TreeNode* root, int k) {

        if(root==NULL)
           return 0;

        vector<int> ans=fun(root);
        sort(ans.begin(), ans.end());

   return ans[k-1];

    }
};
