def SC(a, n):
    # a.sort()
    
    # cnt0=0;cnt1=0;cnt2=0
    # for i in range(n):
    #     if(a[i]==0):
    #         cnt0+=1
    #     elif(a[i]==1):
    #         cnt1+=1
    #     else:
    #         cnt2+=1
            
    # for i in range(n):
    #     if cnt0>0:
    #         a[i]=0
    #         cnt0-=1
    #     elif cnt1>0:
    #         a[i]=1
    #         cnt1-=1
    #     else:
    #         a[i]=2
    #         cnt2-=1
    
    low=0
    mid=0
    high=n-1
    while(mid<=high):
        if(a[mid]==0):
            a[low],a[mid]=a[mid],a[low]
            low+=1
            mid+=1
        elif(a[mid]==1):
            mid+=1
        else:
            a[mid],a[high]=a[high],a[mid]
            high-=1
            
if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    SC(a, n)
    print(a)
