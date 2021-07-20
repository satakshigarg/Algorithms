class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sumArr = 0;
        for (auto n: nums) {
            sumArr += n;
        }
        if ((sumArr+target) % 2 != 0) {
            return 0;
        }
        int n = nums.size();
        int sum = (sumArr+target)/2;
        vector<vector<int>> dp(n+1, vector<int>(sum+1, 0));
        for (int i = 0; i <= n; i += 1) {
            dp[i][0] = 1;
        }
        for (int i = 1; i <= n; i += 1) {
            for (int j = 0; j <= sum; j += 1) {
                if (nums[i-1] <= j) {
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]];
                }
                else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        
        return dp[n][sum];
        
        
    }
};
