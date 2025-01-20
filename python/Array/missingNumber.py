def missingNumber(arr, n):
    # for i in range(0,n+1):
    #     flag=0
    #     for j in range(0,n):
    #         if i==arr[j]:
    #             flag=1
    #             break
    #     if flag==0:
    #         return i
        
    list = []
    for i in range(0, n+1):
        list.append(i)
    for i in range(0, n):
        list.remove(arr[i])
    return list
        
    # sum = 0
    # for i in range(n):
    #     sum += arr[i]
    # print(n * (n + 1) // 2 - sum)
    

n=int(input())
arr=list(map(int, input().split()))
print(missingNumber(arr, n))