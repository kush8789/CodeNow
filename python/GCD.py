
def findgcd(n1, n2):
    gcd=1
    
    for i in range(1,min(n1, n2)+1):
        if n1%i==0 and n2%i==0:
            gcd=i
    return gcd

if __name__ == "__main__":
    n1=int(input())
    n2=int(input())
    gcd=findgcd(n1, n2)
    print(gcd)

# def findgcd(n1, n2):
#     while n2 != 0:
#         n1, n2 = n2, n1 % n2
#     return n1

# if __name__ == "__main__":
#     # Take input for n1 and n2 separately
#     n1 = int(input("Enter the first number: "))
#     n2 = int(input("Enter the second number: "))
    
#     # Find the GCD
#     gcd = findgcd(n1, n2)
    
#     # Print the result
#     print(f"The GCD of {n1} and {n2} is: {gcd}")
