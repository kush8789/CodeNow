def LSK(a,n,K):
    # len=0
    # for i in range(n):
    #     for j in range(i,n):
    #         sum=0
    #         for k in range(i,j+1):
    #             sum+=a[k]
    #         if sum==K:
    #             len=max(len,j-i+1)
    # return len
    
    map={}
    sum=0
    len=0
    for i in range(n):
        sum+=a[i]
        if sum==K:
            len=max(len,i+1)
        if sum-K in map:
            len=max(len,i-map[sum-K])
        if sum not in map:
            map[sum]=i
    return len

if __name__ == '__main__':
    n=int(input())
    a = list(map(int,input().split()))
    K=int(input())
    print(LSK(a,n,K))