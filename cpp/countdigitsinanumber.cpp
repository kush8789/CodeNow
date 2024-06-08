#include<bits/stdc++.h>
using namespace std;

int countdigits(int n)
{
    int count=0;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    int digits=countdigits(n);
    cout<<digits;
    return 0;
}

//TC=O(LogN)  SC=O(1)