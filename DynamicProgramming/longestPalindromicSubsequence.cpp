#include <string>
class Solution {
public:
    int longestPalindromeSubseq(string text1) {
        string text2 = text1;
        reverse(text2.begin(), text2.end());
        int n = text1.size();
        int m = text2.size();
        int dp[n+1][m+1];
        for (int i = 0; i <= n; i += 1){
            for (int j = 0; j <= m; j += 1) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 0;
                }
            }
        }
        for (int i = 1; i <= n; i += 1){
            for (int j = 1; j <= m; j += 1) {
                if (text1[i-1] == text2[j-1]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
    
};
