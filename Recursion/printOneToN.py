def printN(n : int) -> int:
    if n == 1:
        print(n)
        return
    printN(n-1)
    print(n)
    
n = int(input())
printN(n)
