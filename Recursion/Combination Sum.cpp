class Solution {
public:
   //self made function
    void fun(int idx, int target, vector<int>& candidates,  vector<vector<int>>& ans,vector<int>& v){
        if(idx==candidates.size()){
            if(target==0){
                ans.push_back(v);
            }
           return;
        }
       
        if(candidates[idx]<=target){   //call for picked the element
             v.push_back(candidates[idx]);
             fun(idx, target-candidates[idx], candidates, ans, v);
             v.pop_back();
        }

        //call for not picked the element
        fun(idx+1, target, candidates, ans, v); 

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
          vector<vector<int>> ans;
          vector<int> v;
         fun(0, target, candidates, ans, v);
         return ans;
    }
};
