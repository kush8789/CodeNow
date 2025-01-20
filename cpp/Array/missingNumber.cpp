#include<bits/stdc++.h>
using namespace std;

int missingNumber(int a[],int n)
{
    // for(int i=0;i<=n;i++)
    // {
    //     int flag=0;
    //     for(int j=0;j<n;j++)
    //     {
    //         if(a[j]==i)
    //         {
    //             flag=1;
    //             break;
    //         }
    //     }
    //     if(flag==0)
    //     {
    //         return i;
    //     }
    // }
    // return -1;

        // vector<int>b(n+1,-1);
        // for(int i=0;i<n;i++)
        // {
        //     a[a[i]]=a[i];
        // }
        // for(int i=0;i<b.size();i++)
        // {
        //     if(b[i]==-1)
        //     {
        //         return i;
        //     }
        // }
        // return 0;

        // sort(a,a+n);

        // if(a[n-1]!=n)
        // {
        //     return n;
        // }
        // for(int i=0;i<n;i++)
        // {
        //     if(a[i]!=i)
        //     {
        //         return i;
        //     }
        // }
        // return 0;

        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        int total=(n*(n+1))/2;
        return total-sum;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<missingNumber(a,n);
    return 0;
}

//TC->O(n^2) SC-O(1)
//TC->O(n) SC-O(n)
//TC->O(nlogn) SC-O(1)
