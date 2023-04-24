class Solution {
public:
  //same concept as maximum width of BT
     int compute(TreeNode* root, int& ans){
         if(root==NULL)
           return 0;
         
         //this will work only for positive valued sum, will not work is sum is negative bcz we want maximum sum here...so return '0' as sum if -ve path sum is encountered
        //  int lft= compute(root->left, ans);     //compute leftsumpath
        //  int rgt= compute(root->right, ans);   //compute rightsumpath

         int lft= max(0, compute(root->left, ans));     //compute leftsumpath
         int rgt= max(0, compute(root->right, ans));   //compute rightsumpath

         ans= max(ans, lft+rgt+root->val);
         return max(lft,rgt) + root->val;
     }

    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        compute(root,ans);
        return ans;
    }
};
