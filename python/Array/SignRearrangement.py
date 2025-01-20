def isRearrange(a,n):
    # pos=[]
    # neg=[]
    
    # for i in range(0,n):
    #     if a[i]>0:
    #         pos.append(a[i])
    #     else:
    #         neg.append(a[i])
            
    # for i in range(0,n/2):
    #     a[i*2]=pos[i]
    #     a[i*2+1]=neg[i]
    # return a
    
    ans=[]
    pos=0,neg=1
    for i in range(0,n):
        
        if a[i]<0:
            ans[neg]=a[i]
            neg+=2
        else:
            ans[pos]=a[i]
            pos+=2
        return ans

if __name__ == "__main__":
    n=int(input())
    a = list(map(int,input().split()))
    print(isRearrange(a,n))