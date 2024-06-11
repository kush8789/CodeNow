#include<bits/stdc++.h>
using namespace std;

void insertionsort(vector<int>&a,int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && a[j]<a[j-1])
        {
            int temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
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
    insertionsort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

//TC=O(n^2) SC=O(1)

// void recursiveinsertionsort(vector<int>&a, int i ,int n)
// {
//     if(i==n)
//     {
//         return;
//     }
//         int j=i;
//         while(j>0 && a[j]<a[j-1])
//         {
//             int temp=a[j];
//             a[j]=a[j-1];
//             a[j-1]=temp;
//             j--;
//         }
//     recursiveinsertionsort(a,i+1,n);
// }
// Tc=O(n^2) SC=O(n)