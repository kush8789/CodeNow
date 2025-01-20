#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums,int n)
{
    // for(int i=0;i<n;i++)
    //     {
    //         int num=nums[i];
    //         int cnt=0;

    //         for (int j = 0; j < n; j++) {
    //             if (nums[j] == num)
    //                 cnt++;
    //         }
    //         if (cnt == 1) return num;
    //     }
    //     return -1;

    // map<int,int>mp;
    // for(int i=0;i<n;i++)
    // {
    //     mp[nums[i]]++;
    // }
    // for(auto it:mp)
    // {
    //     if(it.first==1)
    //     {
    //         return it.first;
    //     }
    // }
    // return -1;

    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^nums[i];
    }
    return ans;
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
    cout<<singleNumber(nums,n);
}

//TC->O(n^2) SC-O(1)
//TC->O(nlogm) SC-O(n)
//TC->O(n) SC-O(1)