class Solution {
public:
    int maxStolen(vector<int>& nums, int n, int* dp) {
        if (n > nums.size()) {
            return 0;
        }
        if (dp[n] != -1) {
            return dp[n];
        }
        dp[n] = max(nums[n-1] + maxStolen(nums, n+2, dp), maxStolen(nums, n+1, dp));
        return dp[n];
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        int dp[n+1];
        for (int i = 0; i <= n; i ++) dp[i] = -1;
        return maxStolen(nums, 1, dp);
    }
};
