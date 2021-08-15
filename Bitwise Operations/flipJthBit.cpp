#include <iostream>

using namespace std;

int flipJthBit(int n, int bit) {
    return n ^ (1 << bit);
}

int main()
{
   cout << flipJthBit(42, 3) << endl;
   return 0;
}
