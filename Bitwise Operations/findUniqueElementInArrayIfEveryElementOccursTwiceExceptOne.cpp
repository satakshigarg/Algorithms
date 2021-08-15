#include <iostream>

using namespace std;

int findUniqueElement(int nums[], int n) {
    int xorNums = 0;
    for (int i = 0; i < n; i += 1) {
        xorNums = xorNums ^ nums[i];
    }
    return xorNums;
}

int main()
{
   int nums[] = {1, 1, 2, 2, 4, 3, 4};
   cout << findUniqueElement(nums, 7) << endl;
   return 0;
}
