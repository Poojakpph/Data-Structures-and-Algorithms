class Solution
{
    public:
 
    vector<int> v;
    void inorder(Node* root){
        if(root==NULL)
          return;
        
        inorder(root->left);
        v.push_back(root->data);
        inorder(root->right);
        
    }
    bool isBST(Node* root) 
    { 
        if(root==NULL)
          return true;
          
        inorder(root);
        
        
        if(is_sorted(v.begin(), v.end())){
            for(int i=0;i<v.size()-1;i++){
                 if(v[i]==v[i+1]){
                  return false;
                  break;
                 }
              }
           return true;
         }
          
     else       
        return false;
        
        
    }
};

