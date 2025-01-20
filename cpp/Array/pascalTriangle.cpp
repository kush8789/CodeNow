#include<bits/stdc++.h>
using namespace std;

// int nCr(int n, int r){
//     int res = 1;
//     for(int i=0;i<r;i++)
//     {
//         res=res*(n-i);
//         res=res/(i+1);
//     }
//     return res;
// }

// int pascalTriangle(int r,int c){
//     int element=nCr(r-1,c-1);
//     return element;
// }   

// void pascalTriangle(int n) {
//     for (int c = 1; c <= n; c++) {
//         cout << nCr(n - 1, c - 1) << " ";
//     }
//     cout << "n";
// }

// vector<vector<int>>pascalTriangle(int n){
//     vector<vector<int>>ans;
//     for(int row=1;row<=n;row++){
//         {
//             vector<int>v;
//             for(int col=1;col<=row;col++){
//                 v.push_back(nCr(row-1,col-1));
//             }
//             ans.push_back(v);
//         }
//     }
//     return ans;
// }


vector<int>generateRow(int row)
{
    long long prev=1;
    vector<int>v;
    v.push_back(1);
    for(int col=1;col<row;col++){
        prev=prev*(row-col);
        prev=prev/col;
        v.push_back(prev);
    }
    return v;
}

vector<vector<int>>pascalTriangle(int n){
    vector<vector<int>>ans;
    for(int row=1;row<=n;row++){
        ans.push_back(generateRow(row));
    }
    return ans;
}

int main(){
    // int r,c;
    // cin>>r>>c;
    // int element = pascalTriangle(r, c);
    // cout << "The element at position (r,c) is: "
    //         << element << "n";
    // return 0;

    // int n;
    // cin>>n;
    // pascalTriangle(n);
    // return 0;
    int n;
    cin>>n;
    vector<vector<int>>ans=pascalTriangle(n);
    for(auto it:ans)
    {
        for(auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

// variation1- TC=O(c) SC=O(1)
// variation2- TC=O(n*r) SC=O(1),,,,,,,,,TC=O(n) SC=O(1)
// variation3- TC=O(n^3) SC=O(1),,,,,,,,,,TC=O(n^2) SC=O(1)