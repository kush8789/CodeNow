#include<bits/stdc++.h>
using namespace std;
vector<int> signRearrangement(vector<int> a,int n) {
    // vector<int>pos;
    // vector<int>neg;

    // for(int i=0;i<n;i++)
    // {
    //     if(a[i]>0) pos.push_back(a[i]);
    //     else neg.push_back(a[i]);
    // }

    // for(int i=0;i<n/2;i++)
    // {
    //     a[i*2]=pos[i];
    //     a[i*2+1]=neg[i];
    // }
    // return a;

    vector<int>ans(n,0);

    int pos=0,neg=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            ans[neg]=a[i];
            neg+=2;
        }
        else{
            ans[pos]=a[i];
            pos+=2;
        }
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

    vector<int>ans=signRearrangement(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}

//TC=O(n+n/2) SC=O(n)
//TC=O(n) SC=O(n)