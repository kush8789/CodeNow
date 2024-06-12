
// brute force it will only work if array does not contain duplicates
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[n-2];
}

// //TC=O(nlogn) SC=O(1)


// better approach
// void getelements(int a[],int n)
// {
//     if(n==0 || n==1)
//     {
//         cout<<"-1"<<endl;
//         return;
//     }
//     int large=INT_MIN,secondlarge=INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//        large=max(large,a[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]!=large)
//         {
//             secondlarge=max(secondlarge,a[i]);
//         }
//     }
//     cout<<secondlarge<<endl;
// }
// //TC=O(n) SC=O(1)



//optimal approach
// int secondLargest(int arr[],int n)
// {
// 	if(n<2)
// 	return -1;
//     int large=INT_MIN,second_large=INT_MIN;
//     int i;
//     for (i = 0; i < n; i++) 
//     {
//         if (arr[i] > large) 
//         {
//             second_large = large;
//             large = arr[i];
//         }
 
//         else if (arr[i] > second_large && arr[i] != large) 
//         {
//             second_large = arr[i];
//         }
//     }
//     return second_large;                
// }
// //TC=O(n) SC=O(1)