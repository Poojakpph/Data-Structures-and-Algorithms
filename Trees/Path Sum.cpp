class Solution {
public:
  bool paths(TreeNode* root, int checksum, int targetSum) {
        if(root==NULL)
          return false;

        checksum += root->val;

        //checking if we've reached root or not
        if(root->left==NULL && root->right==NULL){
            return checksum==targetSum;
        }

      bool l= paths(root->left, checksum, targetSum);
      bool r= paths(root->right, checksum, targetSum);

      if(l||r){
          return true;
      }

       return false;
        
    }

    //main func
    bool hasPathSum(TreeNode* root, int targetSum) {
        return paths(root, 0, targetSum);    
    }
};
