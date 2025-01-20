#include<bits/stdc++.h>
using namespace std;

int LSK(vector<int>a, int n,int K)
{
    // int len=0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i;j<n;j++)
    //     {
    //         int sum=0;
    //         for(int k=i;k<=j;k++)
    //         {
    //             sum+=a[k];
    //         }
    //         if(sum==K)
    //         {
    //             len=max(len,j-i+1); 
    //         }
    //     }
    // }
    // return len;

    // int len=0;
    // for(int i=0;i<n;i++)
    // {
    //     int sum=0;
    //     for(int j=0;j<n;j++)
    //     {
    //         sum+=a[j];
    //         if(sum==K)
    //         {
    //             len=max(len,j-i+1);
    //         }
    //     }
    // }
    // return len;

    // map<int,int>mp;
    // int sum=0;
    // int max_len=0;
    // for(int i=0;i<n;i++)
    // {
    //     sum+=a[i];

    //     if(sum==K)
    //     {
    //         max_len=max(max_len,i+1);
    //     }

    //     int rem=sum-K;

    //     if(mp.find(rem)!=mp.end())
    //     {
    //         int len=i-mp[rem];
    //         max_len=max(max_len,len);
    //     }

    //     if(mp.find(sum)==mp.end())
    //     {
    //         mp[sum]=i;
    //     }
    // }
    // return max_len;

    int left=0,right=0;
    int sum=a[0];
    int max_len=0;
    while(right<n)
    {
        if(sum<K)
        {
            right++;
            if(right<n)
            {
                sum+=a[right];
            }
        }
        else
        {
            max_len=max(max_len,right-left+1);
            sum-=a[left];
            left++;
        }
    }
    return max_len;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    int K;
    cin>>K;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cout<<LSK(a,n,K);
    return 0;
}

//TC=O(n^3) SC=O(1)
//TC=O(n^2) SC=O(1)
//TC=O(nlogn) SC=O(n)
//Tc=O(1) SC=O(1)