#include<bits/stdc++.h>
using namespace std;

void bubblsort(vector<int>&a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
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
    bubblsort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

//TC=O(n^2) SC=O(1)

// void recursivebubblsort(vector<int>&a, int n)
// {

//     if(n==1)
//     {
//         return;
//     }

//         for(int j=0;j<n-2;j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 int temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//         recursivebubblsort(a,n-1);
// }

// //TC=O(n^2) SC=O(n)