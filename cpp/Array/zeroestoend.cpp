#include<bits/stdc++.h>
using namespace std;

vector<int> movezeroes(vector<int>a,int n)
{
    // vector<int>temp;
    // for(int i=0;i<n;i++)
    // {
    //     if(a[i]!=0)
    //         temp.push_back(a[i]);
    // }
    // int s=temp.size();
    // for(int i=0;i<s;i++)
    // {
    //     a[i]=temp[i];
    // }
    // for(int i=s;i<n;i++)
    // {
    //     a[i]=0;
    // }
    // return a;

    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[j]);
            j++;
        }
    }
    return a;
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
    vector<int>ans = movezeroes(a,n);
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    return 0;
}

// TC=O(2*n) SC=O(n)
// TC=O(n) SC=O(1)
