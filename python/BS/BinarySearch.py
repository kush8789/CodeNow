class Solution:
    
    def binarySearch(self,nums,target,start,end):
        if start > end:
            return -1
        mid = (start + end) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] > target:
            return self.binarySearch(nums,target,start,mid-1)
        else:
            return self.binarySearch(nums,target,mid+1,end)
    
    def search(self, nums, target):
        # start = 0
        # end = len(nums) - 1
        # while start <= end:
        #     mid = (start + end) // 2
        #     if nums[mid] == target:
        #         return mid
        #     elif nums[mid] > target:
        #         end = mid - 1
        #     else:
        #         start = mid + 1
        # return -1
        return self.binarySearch(nums,target,0,len(nums)-1)
        

n=int(input())
nums=list(map(int,input().split()))
target=int(input())
object=Solution()
print(object.search(nums,target))