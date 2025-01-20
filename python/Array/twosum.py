def twosum(nums, target):
    # for i in range(0, len(nums)):
    #     for j in range(i+1, len(nums)):
    #         if nums[i] + nums[j] == target:
    #             return [i, j]
    # return [-1, -1]
    
    # map={}
    # for i in range(0, len(nums)):
    #     if nums[i] in map:
    #         return [map[nums[i]], i]
    #     map[nums[i]]=i
    # return [-1, -1]
    
    n=len(nums)
    l=0
    r=n-1
    while l<r:
        if nums[l]+nums[r]==target:
            return [l+1, r+1]
        elif nums[l]+nums[r]<target:
            l+=1
        else:
            r-=1
    return [-1, -1]

if __name__ == "__main__":
    n=int(input())
    target=int(input())
    nums=list(map(int,input().split()))
    print(twosum(nums, target))