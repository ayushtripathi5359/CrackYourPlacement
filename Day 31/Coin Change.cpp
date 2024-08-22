class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, 0));
        
        // Base case for tabulation
        for(int amt = 0; amt <= amount; amt++) {
            dp[0][amt] = (amt % coins[0] == 0) ? amt / coins[0] : 1e9;
        }

        for(int ind = 1; ind < n; ind++) {
            for(int amt = 0; amt <= amount; amt++) {
                int notTake = dp[ind - 1][amt];
                int take = INT_MAX;
                if(coins[ind] <= amt) {
                    take = 1 + dp[ind][amt - coins[ind]];
                }
                dp[ind][amt] = min(take, notTake);
            }
        }
        
        int ans = dp[n - 1][amount];
        return ans >= 1e9 ? -1 : ans;
    }
};
