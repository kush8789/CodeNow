import math
class Solution:
    def longestConsecutive(self, nums):
        # n=len(nums)
        # if n==0:
        #     return 0
        # max_count=0
        # for i in range(n):
        #     x=nums[i]
        #     count=1
        #     while x+1 in nums:
        #         x+=1
        #         count+=1
        #     max_count=max(max_count,count)
        # return max_count
        
        # n=len(nums)
        # if n==0:
        #     return 0
        # nums.sort()
        # count=1
        # max_count=1
        # prev_smallest=nums[0]
        # for i in range(1,n):
        #     if nums[i]==prev_smallest+1:
        #         count+=1
        #     else:
        #         max_count=max(max_count,count)
        #         count=1
        #     prev_smallest=nums[i]
        # return max(max_count,count)
        
        n=len(nums)
        if n==0:
            return 0
        
        max_count=1
        sett=set(nums)
        for i in range(n):
            if nums[i]-1 not in sett:
                x=nums[i]
                count=1
                while x+1 in sett:
                    x+=1
                    count+=1
                max_count=max(max_count,count)
        return max_count
        

nums=list(map(int,input().split()))
obj=Solution()
result=obj.longestConsecutive(nums)
print(result)
