#include <iostream>

using namespace std;

int findUniqueElement(int nums[], int n) {
    int xorNums = 1;
    for (int i = 2; i <= n; i += 1) {
        xorNums = xorNums ^ i;
    }
    for (int i = 0; i <= n; i += 1) {
        xorNums = xorNums ^ nums[i];
    }
    return xorNums;
}

int main()
{
   int nums[] = {1, 3, 2, 3, 4, 5, 6};
   cout << findUniqueElement(nums, 6) << endl;
   return 0;
}
