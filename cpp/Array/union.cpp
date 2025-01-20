#include<bits/stdc++.h>
using namespace std;

vector<int> FindUnion(vector<int>a,vector<int>b, int n, int m)
{
//     map<int,int>mp;
//     // set<int>s
//     vector<int>Union;
//     for(int i=0;i<n;i++)
//         mp[a[i]]++;
//         // s.insert(a[i]);
//     for(int i=0;i<m;i++)
//         mp[b[i]]++;
//         // s.insert(b[i]);
//     for(auto & it:mp)
//         Union.push_back(it.first);
//     return Union;


    int i=0,j=0;
    vector<int>Union;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
            Union.push_back(a[i++]);
        else if(a[i]>b[j])
            Union.push_back(b[j++]);
        else
        {
            Union.push_back(a[i++]);
            j++;
        }
    }
    while(i<n)
        Union.push_back(a[i++]);
    while(j<m)
        Union.push_back(b[j++]);
    return Union;
}


int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    vector<int>ans = FindUnion(a,b,n,m);
    for(auto & it:ans)
        cout<<it<<" ";
    return 0;
}

// TC=O(n+m)log(n+m) SC=O(n+m)
// TC=O(n+m) SC=O(m+n)