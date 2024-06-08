#include<bits/stdc++.h>
using namespace std;
int findgcd(int n1, int n2)
{
    int gcd=1;
    for(int i=1;i<=min(n1,n2);i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int gcd=findgcd(n1,n2);
    cout<<gcd;
    return 0;
}

//TC=O(min(n1,n2)) SC=O(1)

//better approach will be for(int i=min(n1,n2);i>=1;i--) return i if(n1%i==0 && n2%i==0) TC=O(min(n1,n2)) SC=O(1)

/*optimal approach
int findgcd(int n1, int n2)
{
    if(n1==0)
    {
        return n2;
    }
    return findgcd(n2%n1,n1);
} TC=O(min(n1,n2)) SC=O(1)
*/