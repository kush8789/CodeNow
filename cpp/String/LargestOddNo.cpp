#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        for(int i=n-1;i>=0;i--)
        {
            if(num[i]%2!=0)
            {
                string s=num.substr(0,i+1);
                return s;
            }
        }
        return "";
    }
};
int main()
{
    string num;
    cin>>num;
    Solution ob;
    cout<<ob.largestOddNumber(num);
    return 0;
}