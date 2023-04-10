vector<int> reverseLevelOrder(Node *root)
{
    
    //1st approach- by using queue- TLE
    //push first right node then left node in queue
    
    // vector<int> v;
    // if(!root)
    //   return v;
       
    // queue<Node* >q;
    // q.push(root);
    
    // while(!q.empty()){
    //     int n=q.size();
        
    //     for(int i=0;i<n;i++){
    //           Node* temp=q.front();
    //           q.pop();
               
    //           if(root->right)    
    //              q.push(root->right);
               
    //           if(root->left)
    //              q.push(root->left);
                 
    //         v.push_back(root->data);
         
    //     }
    // }
    
    // reverse(v.begin(), v.end());
    // return v;
    
    
    //2nd approach- using stack
    vector<int>v;
    stack<int>s;
    queue<Node*>q;
    q.push(root);
    
    if(root==NULL)
        return v;
    
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        
        if(temp->right) 
           q.push(temp->right);
           
        if(temp->left)  
           q.push(temp->left);
           
      s.push(temp->data);
        
    }
    
    while(!s.empty()){
        v.push_back(s.top());
        s.pop();
    }
    
    return v;
    
}
