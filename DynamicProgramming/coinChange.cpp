class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        int dp[n+1][amount+1];
        dp[0][0] = 0;
        for (int i = 1; i <= n; i++) {
            dp[i][0] = 0;
        }
        for (int j = 1; j <= amount; j++) {
            dp[0][j] = 10001;
        }
        for (int i = 1; i <= n; i += 1) {
            for(int j = 1; j <= amount; j += 1) {
                if (coins[i-1] <= j) {
                    dp[i][j] = min((1 + dp[i][j-coins[i-1]]), 
                                   dp[i-1][j]);
                }
                else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][amount] == 10001 ? -1 : dp[n][amount];
    }
};
