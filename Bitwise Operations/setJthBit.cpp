#include <iostream>

using namespace std;

int setJthBit(int n, int bit) {
    return n | (1 << bit);
}

int main()
{
   cout << setJthBit(42, 2) << endl;
   return 0;
}
