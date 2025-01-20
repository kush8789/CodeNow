def triplets(nums,n):
    # st=set()
    
    # for i in range(n):
    #     for j in range(i+1,n):
    #         for k in range(j+1,n):
    #             if nums[i]+nums[j]+nums[k]==0:
    #                 temp=tuple(sorted([nums[i],nums[j],nums[k]]))
    #                 st.add(temp)
                    
                    
    # return list(st)
    
    # for i in range(n):
    #     hashset=set()
    #     for j in range(i+1,n):
    #         third=-nums[i]-nums[j]
            
    #         if third in hashset:
    #             temp=tuple(sorted([nums[i],nums[j],third]))
    #             st.add(temp)
    #         hashset.add(nums[j])
            
    # return list(st)
    
    ans=[]
    nums.sort()
    for i in range(n):
        if i>0 and nums[i]==nums[i-1]:
            continue
        j,k=i+1,n-1
        while j<k:
            sum=nums[i]+nums[j]+nums[k]
            if sum>0:
                k-=1
            elif sum<0:
                j+=1
            else:
                ans.append([nums[i],nums[j],nums[k]])
                j+=1
                k-=1
                while j<k and nums[j]==nums[j-1]:
                    j+=1
                while j<k and nums[k]==nums[k+1]:
                    k-=1   
    return ans

if __name__=="__main__":
    n=int(input())
    nums=list(map(int,input().split()))
    print(triplets(nums,n))