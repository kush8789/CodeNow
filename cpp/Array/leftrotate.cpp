#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n)
{
    //int temp[n];
    int temp = a[0];
    for(int i=1;i<n;i++)
    {
        //temp[i-1]=a[i];
        a[i-1]=a[i];
    }
    //temp[n-1]=a[0];
    a[n-1]=temp;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<< endl;
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
    solve(a,n);
    return 0;
}

// TC=O(n) SC=O(n)
// TC=O(n) SC=O(1)