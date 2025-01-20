#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s)
{
    // string ans;
    // int balance=0;
    // for(char c:s)
    // {
    //     if(c=='(' && balance++>0) ans+=c;
    //     if(c==')' && balance-->1) ans+=c;
    // }
    // return ans;

    int opencount=0,closecount=0;
    string res="";
    int start=0;
    for(int i=0;i<s.length();i++)
    {
        char c=s[i];
        if(c=='(')
        {
            opencount++;
        }
        else
        {
            closecount++;
        }
        if(opencount==closecount)
        {
            res+=s.substr(start+1,i-start-1);
            start=i+1;
        }
    }
    return res;
}

int main()
{
    string s;
    cin>>s;
    cout<<removeOuterParentheses(s);
}

//TC=O(N) SC=O(N)
//TC=O(N) SC=O(1)