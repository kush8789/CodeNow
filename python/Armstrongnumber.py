def armstrong(n):
    k=len(str(n))
    sum=0
    temp=n
    while n>0:
        rem=n%10
        sum+=rem**k
        n=n//10
    if temp==sum:
        return True
    else:
        return False

if __name__ == "__main__":
    n=int(input())
    armstrongno=armstrong(n)
    print(armstrongno)