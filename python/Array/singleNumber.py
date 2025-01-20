def singleNumber(arr,n):
    
    # for i in range(n):
    #     num=arr[i]
    #     cnt=0
        
    #     for j in range(n):
    #         if arr[j]==num:
    #             cnt+=1
        
    #     if cnt==1:
    #         return num

    # return -1
    
    # map = {}
    # for i in range(n):
    #     if arr[i] in map:
    #         map[arr[i]] += 1
    #     else:
    #         map[arr[i]] = 1
    # for i in range(n):
    #     if map[arr[i]] == 1:
    #         return arr[i]
    
    res = 0
    for i in range(0,n):
        res = res ^ arr[i]
    return res

if __name__ == "__main__":
    n=int(input())
    arr=list(map(int, input().split()))
    print(singleNumber(arr,n))