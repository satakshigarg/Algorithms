#include <iostream>

using namespace std;

int countSubsetSum(int* arr, int n, int sum, int target) {
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
                dp[i][j] = dp[i-1][j-arr[i-1]];
            }
        }
    }
    int count = 0;
    for (int i = 0; i <= n; i += 1) {
        if (dp[i][target]) {
            count += 1;
        }
    }
    return count;
    
}
