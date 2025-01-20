#include<bits/stdc++.h>
using namespace std;


int removeDuplicates(vector<int>& nums, int n) {
    if(n==0)
    {
        return 0;
    }
    int j=0;
    for(int i=1;i<n;i++)
    {   
        if(nums[i]!=nums[j])
        {
            j++;
            nums[j]=nums[i];
        }   
    }   
    return j+1;

    // int n=nums.size();
    // set<int>s;
    // for(int i=0;i<n;i++)
    // {
    //     s.insert(nums[i]);
    // }
    // nums.clear();
    // for(auto x:s)
    // {
    //     nums.push_back(x);
    // }
    // return s.size();
}   
int main()
{   
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<removeDuplicates(nums,n);
    return 0;
}

// TC=O(nlogn)+O(n)+O(n) SC=O(n)
// TC=O(n) SC=O(1)