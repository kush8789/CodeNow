#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>&a,int n,int x)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        else if(a[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<BinarySearch(a,n,x);
    return 0;
}