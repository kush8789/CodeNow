#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int subarraySum(vector<int>& nums, int n, int k)
        {
            // int count=0;
            // for(int i=0;i<n;i++)
            // {
            //     int sum=0;
            //     for(int j=i;j<n;j++)
            //     {
            //         // for(int k=i;k<=j;k++)
            //         // {
            //         //      .....
            //         // }
            //         sum+=nums[j];
            //         if(sum==k)
            //         {
            //             count++;
            //         }
            //     }
            // }
            // return count;

            map<int,int>mp;
            int sum=0;
            int count=0;
            for(int i=0;i<n;i++)
            {
                sum+=nums[i];
                if(sum==k)
                {
                    count++;
                }
                if(mp.find(sum-k)!=mp.end())
                {
                    count+=mp[sum-k];
                }
                mp[sum]++;
            }
            return count;
            
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Solution obj;
    cout<<obj.subarraySum(a,n,k);
}