from typing import List
# from collections import Counter

# def majorityElement(nums: List[int]) -> List[int]:
#     n=len(nums)
#     ls=[]
    
#     for i in range(n):
#         if len(ls) == 0 or ls[0] != nums[i]:
#             cnt = 0
#             for j in range(n):
#                 if nums[j]==nums[i]:
#                     cnt += 1        
#             if cnt > (n//3):
#                 ls.append(nums[i])                
#     return ls

# def majorityElement(nums):
#     n=len(nums)
#     counter=Counter(nums)
#     ls=[]
#     for num,counter in counter.items():
#         if counter>n//3:
#             ls.append(num)
#     return ls

def majorityElement(nums: List[int])->List[int]:
    n=len(nums)
    cnt1,cnt2=0,0
    el1,el2=float('-inf'),float('-inf')
    for i in range(n):
        if cnt1==0 and el2!=nums[i]:
            cnt1+=1
            el1=nums[i]
        elif cnt2==0 and el1!=nums[i]:
            cnt2+=1
            el2=nums[i]
        elif (el1==nums[i]): cnt1+=1
        elif (el2==nums[i]): cnt2+=1
        else:
            cnt1-=1
            cnt2=-1
            
    ans=[]
    
    cnt1,cnt2=0,0
    for i in range(n):
        if nums[i]==el1:
            cnt1+=1
        if nums[i]==el2:
            cnt2+=1
            
    temp=n//3
    if(cnt1>temp):
        ans.append(el1)
    if(cnt2>temp):
        ans.append(el2)
        
    return ans
    
n=int(input())
arr=list(map(int, input().split()))
ans=majorityElement(arr)
for it in ans:
    print(it, end=" ")
    