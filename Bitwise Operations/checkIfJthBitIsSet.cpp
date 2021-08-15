#include <iostream>

using namespace std;

bool checkIfBitIsSet(int n, int bit) {
    return n & (1 << bit);
}

int main()
{
   cout << checkIfBitIsSet(42, 2) << endl;
   return 0;
}
