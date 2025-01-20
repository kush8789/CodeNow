#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
        // stack<string>st;
        // string str="";
        // for(int i=0;i<s.length();i++)
        // {
        //     if(s[i]==' ')
        //     {
        //         if(!str.empty())
        //         {   
        //             st.push(str);
        //             str="";
        //         }
        //     }
        //     else
        //     {
        //         str+=s[i];
        //     }
        // }
        // if(!str.empty())
        // {
        //     st.push(str);
        // }
        // string ans="";
        // while(!st.empty())
        // {
        //     ans+=st.top();
        //     st.pop();
        //     if (!st.empty()) {
        //         ans += " ";
        //     }
        // }
        // return ans;

        int left=0;
        int right=s.length()-1;

        while (left <= right && s[left] == ' ') left++;
        while (right >= left && s[right] == ' ') right--;

        string temp="";
        string ans="";

        while(left<=right)
        {
            char ch=s[left];
            if(ch!=' ')
            {
                temp+=ch;
            }
            else if(ch==' ' && temp!="")
            {
                if(ans!="") ans=temp+" "+ans;
                else ans=temp;
                temp="";
            }
            left++;
        }
        if(temp!=""){
            if(ans!="") ans=temp+" "+ans;
            else ans=temp;
        }
        return ans;
    }


int main()
{
    string s;
    cin>>s; 
    cout<<reverseWords(s);
    return 0;
}

//TC=O(N) SC=O(N)
//TC=O(N) SC=O(1)