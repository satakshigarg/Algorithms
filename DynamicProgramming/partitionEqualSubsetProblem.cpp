class Solution {
public:
    
    bool subsetSum(vector<int>& nums, int targetSum) {
        int n = nums.size();
        vector<vector<bool> > dp(n+1, vector<bool>(targetSum+1, false));
        dp[0][0] = true;
        for (int i = 1; i <= n; i += 1) {
            dp[i][0] = true;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= targetSum; j++) {
                dp[i][j] = dp[i-1][j];
                if (nums[i-1] <= j) {
                    dp[i][j] = dp[i][j] || dp[i-1][j-nums[i-1]];
                }
            }
        }
        return dp[n][targetSum];
    }
    
    bool canPartition(vector<int>& nums) {
        int sumArr = 0;
        for (auto x: nums) {
            sumArr += x;
        }
        if (sumArr%2) return false;
        return subsetSum(nums, sumArr/2);
        
    }
};
