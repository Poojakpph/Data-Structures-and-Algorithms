class Solution
{
    public:
  void Inorder(Node *root,  vector<int>& v){
      if(root==NULL)
         return;
          
     Inorder(root->left, v);
     v.push_back(root->data);
     Inorder(root->right, v);
     
    }
    
    int kthLargest(Node *root, int K)   //main func
    {
        
        //1st approach
        
    //     if(root==NULL)
    //       return 0;
        
    //     queue<Node*> q;
    //     q.push(root);
    //     vector<int> v;
            
    //     while(!q.empty()){
    //         int n=q.size();
            
    //         for(int i=0;i<n;i++){
    //             Node* node=q.front();
    //             q.pop();
                
    //             if(root->left)
    //               q.push(root->left);
                  
    //             if(root->right)
    //               q.push(root->right);
                
    //             v.push_back(root->data);
    //         }
    //     }
       
    //  sort(v.begin(), v.end());
     
    //  for(int i=0;i<v.size(); i++)
    //      return v[K-1];
    
   
     //inorder concept-- elements will come in sorted order
     vector<int> v;
     Inorder(root, v);
     
     int n=v.size();
     return v[n-K];
    
    }
};
