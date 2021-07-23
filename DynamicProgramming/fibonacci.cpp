#include <iostream>

using namespace std;

int fibonacci(int* fib, int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    if (fib[n] != -1) {
        return fib[n];
    }
    fib[n] = fibonacci(fib, n-1) + fibonacci(fib, n-2);
    return fib[n];
    
}
