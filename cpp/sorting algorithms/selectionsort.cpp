#include<bits/stdc++.h>
using namespace std;

void selectionsort(vector<int>&a,int n)
{
    for(int i=0;i<n;i++)
    {
        int min=a[i];
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                minindex=j;
            }
        }
        swap(a[i],a[minindex]);
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
    selectionsort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

//TC=O(n^2) SC=O(1)