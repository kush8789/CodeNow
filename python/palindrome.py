def ispalindrome(s):
    if s==s[::-1]:
        return True
    else:
        return False


if __name__ == "__main__":
    s=str(input())
    ans=ispalindrome(s)
    if ans:
        print("Palindrome")
    else:
        print("Not Palindrome")
    