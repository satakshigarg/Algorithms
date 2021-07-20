#include <iostream>

using namespace std;

int minSubsetDiff(int* arr, int n, int sum) {
    vector<vector<bool>> dp (n+1, vector<bool>(sum+1, false));
    for (int i = 1; i <= n; i += 1) {
        dp[i][0] = true;
    }
    for (int j = 1; j <= sum; j += 1) {
        dp[0][j] = false;
    }
    
    for (int i = 1; i <= n; i += 1) {
        for (int j = 1; j <= sum; j += 1) {
            dp[i][j] = dp[i-1][j];
            if (arr[i-1] <= sum) {
                dp[i][j] = dp[i-1][j-arr[i]];
            }
        }
    }
    int minDiff = INT_MAX;
    for (int i = 0; i <= sum/2 + 1; i += 1) {
        if (dp[n][i]) {
            minDiff = min(minDiff, (sum-2*dp[n][i]));
        }
    }
    return minDiff;
    
}
