def printN(n : int) -> int:
    print(n)
    if n == 1:
        return n
    printN(n-1)
    
n = int(input())
printN(n)
