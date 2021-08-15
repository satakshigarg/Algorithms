#include <iostream>

using namespace std;

int findTotalSetBit(int n) {
    int totalSetBits = 0;
    while (n > 0) {
        if (n&1) {
            totalSetBits += 1;
        }
        n = n >> 1;
    }
    return totalSetBits;
}

int main()
{
   cout << findTotalSetBit(3) << endl;
   return 0;
}
