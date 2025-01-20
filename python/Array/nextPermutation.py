class Solution:
    def reverse(self, nums, start):
        i = start
        j = len(nums) - 1
        while i < j:
            nums[i], nums[j] = nums[j], nums[i]  # Swap elements
            i += 1
            j -= 1

    def nextPermutation(self, nums):
        len_nums = len(nums) - 2
        ind = -1
        # Find the rightmost element which is smaller than the next element
        for i in range(len_nums, -1, -1):
            if nums[i] < nums[i + 1]:
                ind = i
                break
        # If no such element is found, reverse the entire array
        if ind == -1:
            self.reverse(nums, 0)
            return
        # Find the rightmost element that is greater than nums[ind]
        for i in range(len(nums) - 1, ind, -1):
            if nums[i] > nums[ind]:
                nums[i], nums[ind] = nums[ind], nums[i]  # Swap elements
                break
        # Reverse the sequence from ind+1 to the end to get the next permutation
        self.reverse(nums, ind + 1)

# Test the solution with example inputs
nums = list(map(int, input().split()))  # For example, input: 4 5 3 2 1
Solution().nextPermutation(nums)
print(" ".join(map(str, nums)))  # Output the next permutation
