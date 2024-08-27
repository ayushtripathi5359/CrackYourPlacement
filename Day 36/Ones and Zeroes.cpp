class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<pair<int, int>> v;
        for(string x : strs){
            int cnt = count(x.begin(), x.end(), '0');
            v.push_back({cnt, x.size()-cnt});
        }
        vector<vector<vector<int>>> dp(strs.size()+2, vector<vector<int>>(m+2, vector<int>(n+2, 0)));
        for(int i=0;i<=v.size();i++){
            for(int j=0;j<=m;j++){
                for(int k=0;k<=n;k++){
                    if(i==0) dp[i][j][k] = 0;
                    else if(j>=v[i-1].first && k>=v[i-1].second) dp[i][j][k] = max(dp[i-1][j][k], 1+dp[i-1][j-v[i-1].first][k-v[i-1].second]);
                    else dp[i][j][k] = dp[i-1][j][k];
                }
            }
        }
        return dp[v.size()][m][n];
    }
};
