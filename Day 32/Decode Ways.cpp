class Solution {
public:
    int dp[109][109];
    int solve(int i, int j, string &s) {
        if (i == s.size()) return 1;

        int &ans=dp[i][j];
        if (~ans) return ans;

        ans=0;
        if (s[i]-'0') ans+=solve(i+1, s[i]-'0', s);
        if (j && j*10+(s[i]-'0') < 27) ans+=solve(i+1, j*10+(s[i]-'0'), s);

        return ans;
    }
    int numDecodings(string s) {
        memset(dp, -1, sizeof dp);
        return solve(0, 0, s);
    }
};
