#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&a,int l, int mid, int h)
{
    vector<int>temp;
    int left=l;
    int right=mid+1;

    while(left<=mid && right<=h)
    {
        if(a[left]<=a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            right++;
        }
    }

    while(left<=mid)
    {
        temp.push_back(a[left]);
        left++;
    }
    while(right<=h)
    {
        temp.push_back(a[right]);
        right++;
    }

    for(int i=l;i<=h;i++)
    {
        a[i]=temp[i-l];
    }
}

void mergesort(vector<int>&a,int l,int h)
{
    if(l>=h)
    {
        return;
    }
    int mid=(l+h)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,h);
    merge(a,l,mid,h);
}
int main()
{

    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }

    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

//TC=O(nlogn) SC=O(n)