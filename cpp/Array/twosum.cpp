#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>&nums, int target)
{
    // int n=nums.size();
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(i!=j && nums[i]+nums[j]==target)
    //         {
    //             return {i,j};
    //         }
    //     }
    // }
    // return {-1,-1};

    // int n=nums.size();
    // map<int,int>mp;
    // for(int i=0;i<n;i++)
    // {
    //     if(mp.find(target-nums[i])!=mp.end())
    //     {
    //         return {mp[target-nums[i]],i};
    //     }
    //     mp[nums[i]]=i;
    // }
    // return {-1,-1};

    int n=nums.size();
    int l=0,r=n-1;
    while(l<r)
    {
        if(nums[l]+nums[r]==target)
        {
            return {l+1,r+1};
        }
        else if(nums[l]+nums[r]<target)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    return {-1,-1};
}
int main()
{
    int n,target;
    cin>>n>>target;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int> ans=twoSum(a,target);
    for(std::vector<int>::size_type i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}

//TC=O(n^2) SC=O(1)
//TC=O(n) SC=O(n)
//TC=O(n) SC=O(1)