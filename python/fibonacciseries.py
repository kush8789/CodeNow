def fibonacci(n):
    if n==0 or n==1:
        return n
    else:
        return fibonacci(n-1)+fibonacci(n-2)

if __name__ == "__main__":
    n=int(input())
    i=0
    while i<n:
        print(fibonacci(i))
        i+=1