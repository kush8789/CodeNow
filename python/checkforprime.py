def isprime(n):
    count=0
    for i in range(1,n+1):
        if n%i==0:
            count+=1
    if count==2:
        return True
    else:   
        return False

if __name__ == "__main__":
    n=int(input())
    prime = isprime(n)
    if prime:
        print("Prime")
    else:
        print("Not Prime")