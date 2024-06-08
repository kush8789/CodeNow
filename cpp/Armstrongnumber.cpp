#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=to_string(n).length();
    int sum=0;
    int temp=n;
    while(n>0)
    {
        int rem=n%10;
        sum+=pow(rem,k);
        n=n/10;
    }
    if(sum==temp)
    {
        cout<<"Armstrong number";
    }
    else
    {
        cout<<"Not Armstrong number";
    }
    return 0;
}