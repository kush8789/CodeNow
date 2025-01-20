# from collections import defaultdict

def FindUnion(arr1, arr2):
    # mp = defaultdict(int)
    mp = {}
    union = []
    
    for i in range(len(arr1)):
        mp[arr1[i]] += 1
    
    for i in range(len(arr2)):
        mp[arr2[i]] += 1
    
    for key in mp:
        union.append(key)
    
    return union

n = int(input())
arr1 = list(map(int, input().split()))
m = int(input())
arr2 = list(map(int, input().split()))

result = FindUnion(arr1, arr2)
print(result)
