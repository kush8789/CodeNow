#include<bits/stdc++.h>
using namespace std;


bool isValid(string s) {
    stack<char>st;
    for(char c : s)
    {
        if(c=='(' || c=='{' || c=='[')
        {
            st.push(c);
        }
        else
        {
            if(st.empty() || (c==')' && st.top()!='(') || (c=='}' && st.top()!='{') || (c==']' && st.top()!='['))
            {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main(){
    string s;
    cin>>s;
    if(isValid(s))
        cout<<"valid";
    else
        cout<<"not valid";
    return 0;
}