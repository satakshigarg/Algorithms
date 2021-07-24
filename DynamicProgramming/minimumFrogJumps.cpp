#include <iostream>

using namespace std;

int frogJumps(int* jumps, int stones, int jump, int* dp) {
    if (jump >= stones) {
        return 1;
    }
    if (dp[jump] != -1) {
        return dp[jump];
    }
    for (int i = 1; i < jumps[jump]; i += 1) {
        dp[jump] = min(frogJumps(jumps, stones, jump+i, dp),
                        frogJumps(jumps, stones, jump+i+1, dp));
    }
    return dp[jump];
    
}
