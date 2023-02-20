class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<pair<int,int>> kl;
        int n = score.size();
        int m = score[0].size();
        vector<vector<int>> sd(n,vector<int>(m,0));
        for(int i=0;i<n;i++) {
            kl.push_back({score[i][k],i});
        }
        sort(kl.begin(),kl.end(),greater<pair<int, int>>());
        for(int i=0;i<n;i++){
            pair<int,int> nm =kl[i];
            int gh = nm.second;
           for(int j=0;j<m;j++) {
              sd[i][j]=score[gh][j]; 
           }
        }
        return sd;;
    }
};
