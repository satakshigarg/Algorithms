#include <iostream>

using namespace std;

int maxRibbonCut(int len, int* cuts) {
    int n = cuts.size();
    int dp[n+1][len+1];
    dp[0][0] = 0;
    for (int i = 1; i <= n; i += 1) {
        dp[i][0] = 0;
    }
    for (int j = 1; j <= len; j += 1) {
        dp[0][j] = 0;
    }
    for (int i = 1; i <= n; i += 1) {
        for (int j = 1; j <= len; j += 1) {
            if (cuts[i-1] <= j) {
                dp[i][j] = max((1 + dp[i][j-cuts[i-1]]),
                                (dp[i-1][j]));
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][len];
}
