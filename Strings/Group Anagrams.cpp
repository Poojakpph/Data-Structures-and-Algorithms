class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        
   // key= each sorted string
   // value= vector of answer strings
        
    for(int i=0;i<strs.size();i++){
         string sm=strs[i];           
         sort(sm.begin(), sm.end());  // sorted string
         mp[sm].push_back(strs[i]);  // inserting the values in the map in the respected sorted key                       
        }
        
 vector<vector<string>> ans;
    for(auto it: mp){
            ans.push_back(it.second);
      }
        return ans;
        
        
    }
};
