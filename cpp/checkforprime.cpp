#include<bits/stdc++.h>
using namespace std;

bool checkprime(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    bool prime=checkprime(n);
    if(prime){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
    return 0;
}

//TC=O(n) SC=O(1)