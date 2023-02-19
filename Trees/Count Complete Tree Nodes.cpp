class Solution {
public:

  int leftHght(TreeNode* root){
      int ht=0;
      while(root!=NULL){
          ht++;
          root=root->left;
      }
      return ht;
  }


  int rightHght(TreeNode* root){
      int ht=0;
      while(root!=NULL){
          ht++;
          root=root->right;
      }
      return ht;
  }

// main function
    int countNodes(TreeNode* root) {
        if(root==NULL) 
            return 0;

        int lh=leftHght(root);
        int rh=rightHght(root);

        if(lh==rh){
           return pow(2,lh) -1;
        }
      
       return  1 + countNodes(root->left) +  countNodes(root->right);       

    }
};
