#include<bits/stdc++.h>
using namespace std;

int SBS(vector<int>&a,int n)
{
    // int maxi=INT_MIN;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(a[j]>a[i])
    //         {
    //             maxi=max(maxi,a[j]-a[i]);
    //         }
    //     }
    // }
    // return maxi;

    int mini=INT_MAX;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        mini=min(mini,a[i]);
        ans=max(ans,a[i]-mini);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=SBS(a,n);
    cout<<ans;
    return 0;
}

//TC=O(n^2) SC=O(1)
//TC=O(n) SC=O(1)