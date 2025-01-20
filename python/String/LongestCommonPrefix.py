def LongestCommonPrefix(strs):
    prefix = strs[0]
    for i in range(1, len(strs)):
        while strs[i].find(prefix) != 0:
            prefix = prefix[0:-1]
            if not prefix:
                return ""
    return prefix

n=int(input())
strs=[]
for i in range(n):
    strs.append(input())
print(LongestCommonPrefix(strs))