import math
def finddivisors(n):
    divisors=[]
    sqrtn=int(math.sqrt(n))
    for i in range(1,sqrtn+1):
        if n%i==0:
            divisors.append(i)
            if i!=n//i:
                divisors.append(n//i)
    return divisors
        

if __name__ == "__main__":
    n=int(input())
    divisors=finddivisors(n)
    
    for i in divisors:
        print(i,end=" ")