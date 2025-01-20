#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {

    // string ans="";
    // sort(strs.begin(),strs.end());
    // int n=strs.size();
    // string first=strs[0],last=strs[n-1];
    // for(int i=0;i<min(first.size(),last.size());i++)
    // {
    //     if(first[i]==last[i])
    //         ans+=first[i];
    //     else
    //         break;
    // }
    // return ans;

    if(strs.size()==0) return "";
    string prefix=strs[0];
    for(size_t i=1;i<strs.size();i++)
    {
        size_t j=0;
        for(j=0;j<strs[i].size() && j<prefix.size();j++)
        {
            if(strs[i][j]!=prefix[j])
                break;
        }
        prefix=prefix.substr(0,j);
        if(prefix == "") return "";
    }
    return prefix;
}
int main()
{
    int n;
    cin>>n;
    vector<string>s;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        s.push_back(x);
    }
    cout<<longestCommonPrefix(s);
}

//TC=O(NlogN*M) SC=O(N+M)
//TC=O(N) SC=O(1)