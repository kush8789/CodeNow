def max_odd(s):
    for i in range(len(s)-1, -1, -1):
        if int(s[i]) % 2 != 0:
            return s[:i+1]
        return ""
    
n=input()
print(max_odd(n))