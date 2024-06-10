#include<bits/stdc++.h>
using namespace std;
void frequency(vector<int>a,int n)
{
    vector<bool>visited(n,false);
    for(int i=0;i<n;i++)
    {
        if(visited[i]==true)
        continue;
        
            int count=1;
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    visited[j]=true;
                }
            }
        cout<<a[i]<<" "<<count<<endl;
           
    }
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
    frequency(a,n);
    return 0;
}

//TC=O(n*n) SC=O(n)

// void frequency(vector<int>a,int n)
// {
//     unordered_map<int,int>mp;
//     for(int i=0;i<n;i++)
//     {
//         mp[a[i]]++;
//     }

//     for(auto it : mp)
//     {
//         cout<<it.first<<" "<<it.second;
//     }
// }

// TC=O(n) SC=O(n)