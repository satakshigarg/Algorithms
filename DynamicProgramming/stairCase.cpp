#include <iostream>

using namespace std;

int stairCase(int* steps, int stairs) {
    int n = steps.size();
    int dp[n+1][stairs+1];
    dp[0][0] = 0;
    for (int i = 1; i <= n; i += 1) {
        dp[i][0] = 1;
    }
    for (int j = 1; j <= stairs; j += 1) {
        dp[0][j] = 0;
    }
    for (int i = 1; i <= n; i += 1) {
        for (int j = 1; j <= stairs; j += 1) {
            if (steps[i-1] <= j) {
                dp[i][j] = dp[i][j- stairs[i-1]] + dp[i-1][j];
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][stairs];
    
}
