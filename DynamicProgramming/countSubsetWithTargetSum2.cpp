#include <iostream>

using namespace std;

int countSubsetSum(int* arr, int n, int sum) {
    vector<vector<int>> dp (n+1, vector<int>(sum+1, 0));
    for (int i = 1; i <= n; i += 1) {
        dp[i][0] = 1;
    }
    for (int j = 1; j <= sum; j += 1) {
        dp[0][j] = 0;
    }
    
    for (int i = 1; i <= n; i += 1) {
        for (int j = 1; j <= sum; j += 1) {
            if (arr[i-1] <= sum) {
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i]];
            }
        }
    }
    
    return dp[n][sum];
    
}
