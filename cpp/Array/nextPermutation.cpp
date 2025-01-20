#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    // Reverse the part of the vector from the given start index to the end
    void reverse(vector<int>& nums, int start) {
        int i = start, j = nums.size() - 1;
        while (i < j) {
            std::swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }

public:
    // Function to find the next permutation
    void nextPermutation(vector<int>& nums) {
        int len = nums.size() - 2;
        int ind = -1;
        // Find the rightmost element which is smaller than the next element
        for (int i = len; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }
        // If no such element is found, reverse the entire array
        if (ind == -1) {
            reverse(nums, 0);
            return;
        }
        // Find the rightmost element that is greater than nums[ind]
        for (int i = nums.size() - 1; i > ind; i--) {
            if (nums[i] > nums[ind]) {
                std::swap(nums[i], nums[ind]);
                break;
            }
        }
        // Reverse the sequence from ind+1 to the end to get the next permutation
        reverse(nums, ind + 1);
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    Solution sol;
    sol.nextPermutation(nums);
    
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
