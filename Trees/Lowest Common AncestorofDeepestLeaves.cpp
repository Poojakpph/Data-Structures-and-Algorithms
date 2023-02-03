class Solution {
public:
    int height(TreeNode* root){  // to calculate height
        if(root==NULL) return 0;

         int x= 1+ height(root->left);
         int y= 1+ height(root->right);
         return max(x,y);

      }

    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        // concept
        // we move in LST or RST whosoever height/depth is greater
        // we move until height for a node gets equal and then return the address/root of that node 
        if(root==NULL) 
            return NULL;

       int left_dpt= height(root->left);  
       int right_dpt= height(root->right);

        if(left_dpt==right_dpt)
            return root;
        
        else if(left_dpt>right_dpt)
            return lcaDeepestLeaves(root->left);

        else
            return lcaDeepestLeaves(root->right);
        
    }
};
