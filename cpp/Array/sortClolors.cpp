#include<bits/stdc++.h>
using namespace std;

int sortColors(vector<int>& nums) {

    // sort(nums.begin(),nums.end());

    int n=nums.size();
    int cnt0=0,cnt1=0,cnt2=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
        {
            cnt0++;
        }
        else if(nums[i]==1)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }

    for(int i=0;i<cnt0;i++)
    {
        nums[i]=0;
    }
    for(int i=cnt0;i<cnt0+cnt1;i++)
    {
        nums[i]=1;
    }
    for(int i=cnt0+cnt1;i<n;i++)
    {
        nums[i]=2;
    }

    // int low=0,mid=0,high=nums.size()-1;
    // while(mid<=high)
    //     {
    //         if(nums[mid]==0)
    //         {
    //             swap(nums[low],nums[mid]);
    //             low++;
    //             mid++;
    //         }
    //         else if(nums[mid]==1)
    //         {
    //             mid++;
    //         }
    //         else
    //         {
    //             swap(nums[mid],nums[high]);
    //             high--;
    //         }
    //     }
    // return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sortColors(arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

//TC=O(nlogn) SC=O(1)
//TC=O(n)+O(n) SC=O(1)
//TC=O(n) SC=O(1)