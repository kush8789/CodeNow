#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(int nums[],int n)
{
        int count=0;
        int max_count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else{
                count=0;
            }
            max_count=max(count,max_count);
        }
        return max_count;
}

int main()
{
    int n;
    cin>>n; 
    int nums[n];
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<maxConsecutiveOnes(nums,n);
}

//TC=O(n) SC=O(1)