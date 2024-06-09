#include<bits/stdc++.h>
using namespace std;

int* printdivisor(int n,int &size)
{
    //dynamically allocated array for divisors
    int *divisors=new int[n];
    int count=0;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            divisors[count++]=i;
        }
    }
    size=count;
    return divisors;
}
int main()
{
    int n;
    cin>>n;
    int size;
    int *divisors=printdivisor(n,size);
    for(int i=0;i<size;i++)
    {
        cout<<divisors[i]<<" ";
    }
    delete[] divisors;
    return 0;
}

//TC=O(n) SC=O(n)

// vector<int>finddivisor(int n)
// {
//     vector<int>divisors;
//     int sqr=sqrt(n);
//     for(int i=1;i<sqr;i++)
//     {
//         if(n%i==0){
//             divisors.push_back(i);

//             if(i!=n/i)
//             {
//                 divisors.push_back(n/i);
//             }
//         }
//     }
//     return divisors;
// }
// TC=O(sqrt(n)) SC=O(2sqrt(n))