class Solution:
    def subarraySum(self, nums, k):
        # count=0
        # for i in range(0,len(nums)):
        #     sum=0
        #     for j in range(i,len(nums)):
        #         sum+=nums[j]
        #         if sum==k:
        #             count+=1
        # return count
        mp={}
        sum=0
        count=0
        mp[0]=1
        for i in range(0,len(nums)):
            sum+=nums[i]
            if sum-k in mp:
                count+=mp[sum-k]
            if sum in mp:
                mp[sum]+=1
            else:
                mp[sum]=1
        return count

n=int(input())    
nums=list(map(int,input().split()))
k=int(input())
obj=Solution()
result=obj.subarraySum(nums,k)
print(result)