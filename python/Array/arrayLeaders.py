class Soution:
    def arrayLeaders(self, arr, n):
        ans = []
        # for i in range(n):
        #     leader=True
        #     for j in range(i+1,n):
        #         if arr[i]<arr[j]:
        #             leader=False
        #             break
        #     if leader:
        #         ans.append(arr[i])
        # print(ans)
        
        max=arr[n-1]
        ans.append(max)
        for i in range(n-2,-1,-1):
            if arr[i]>max:
                max=arr[i]
                ans.append(max)
        print(ans[::-1])
            
nums = list(map(int, input().split()))
obj = Soution()
obj.arrayLeaders(nums, len(nums))