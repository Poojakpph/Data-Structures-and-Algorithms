class Solution{
    public:
    //self made func

     int height(Node *root){
        if(root==NULL)
           return 0;
         
        return 1+ max(height(root->left), height(root->right));
    }
    
   //main func   
    bool isBalanced(Node *root)
    {
        //TC- O(N)*O(N)  = O(n^2)
        //SC- O(N)
        
        if(root==NULL)
          return true;
     
      bool left = isBalanced(root->left);
      bool right =isBalanced(root->right);
      bool r= abs(height(root->left) - height(root->right))<=1;
      
      if(left==true && right==true && r==true)
            return true;
         
         return false;
       
    }
};
