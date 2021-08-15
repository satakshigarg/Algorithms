#include <iostream>

using namespace std;

int unsetJthBit(int n, int bit) {
    return n & ~(1 << bit);
}

int main()
{
   cout << unsetJthBit(42, 3) << endl;
   return 0;
}
