class Solution {
public:
  
  //PREORDER traversal is used here
  bool fun(TreeNode* root, vector<int>& v, int A){
      if(!root)
        return false;
     
    v.push_back(root->data);  //add the node every time we visit that node

    bool l= fun(root->left,v,A);
    bool r= fun(root->right,V,A);

    if(root->val==A)  //we found the node
      return true;

    if(l || r)   //if left or right return true that means we found our required node and path
      return true;

    if(l ==false && r==false)   //means this path is not the required path
      return false;
    
     v.pop_back();     //delete the last node if the path/node is not the required path/node
     return false;

  }
    vector<string> binaryTreePaths(TreeNode* root, int A) {   //main function
        vector<int> v;
        if(root==NULL)
          return {};
        
        fun(root, V, A);
        return v;
        
    }
};
