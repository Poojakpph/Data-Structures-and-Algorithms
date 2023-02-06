class Solution {
public:
    int maxLevelSum(TreeNode* root){

        if(root==NULL) return 0;

        queue<TreeNode*> q;
        q.push(root);

        int lvl=0, ans=0;
        int maxi=INT_MIN;

   while(!q.empty()){
        int n=q.size();
        int sum=0;
          lvl++;  //level increament
         
        for(int i=0;i<n;i++){
              TreeNode* node= q.front();
              if(node->left)
                  q.push(node->left);

              if(node->right)
                  q.push(node->right);
                
            sum+=node->val;
            q.pop();
          }
          cout<<sum<<endl;
        
          if(sum>maxi){
                maxi=sum;
                ans=lvl;
            }
            
   }

   return ans;
    }
};
