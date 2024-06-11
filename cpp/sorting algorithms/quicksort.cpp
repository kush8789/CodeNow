#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&a, int low, int high)
{
    int pivot=a[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(a[i]<=pivot && i<=high-1)
        {
            i++;
        }
        while(a[j]>pivot && j>=low+1)
        {
            j--;
        }
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }
    swap(a[low],a[j]);
    return j;
}
void quickSort(vector<int>&a, int low, int high)
{
    if(low<high)
    {
        int pivot=partition(a,low,high);
        quickSort(a,low,pivot-1);
        quickSort(a,pivot+1,high);
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
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

//TC=O(nlogn) SC=O(1)