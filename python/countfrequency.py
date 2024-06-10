def fre(a,n):
    visited = [False]*n
    for i in range(n):
        if visited[i]:
            continue
        count = 1
        for j in range(i+1,n):
            if a[i]==a[j]:
                visited[j]=True
                count+=1
        print(a[i],"=",count)


if __name__ == "__main__":
    n=int(input())
    a = list(map(int,input().split()))
    fre(a,n)
    
    
    
# def Frequency(arr, n):
#     mp = {}
#     for i in range(n):
#         if arr[i] in mp:
#             mp[arr[i]] += 1
#         else:
#             mp[arr[i]] = 1
#     for x in mp:
#         print(x, mp[x])