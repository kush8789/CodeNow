#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string s)
{
    int left=0,right=s.length()-1;
    while(left<right)
    {
        if(!isalnum(s[left]))
        {
            left++;
        }
        else if(!isalnum(s[right]))
        {
            right--;
        }
        else if(tolower(s[left])!=tolower(s[right]))
        {
            return false;
        }
        else{
        left++;
        right--;
        }
    }
    return true;
}
int main()
{
    string s;
    cin>>s;
    bool ans=ispalindrome(s);
    if(ans)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not a palindrome";
    }   
    return 0;
}

// TC=O(n) SC=O(1)

// bool palindrome(int i, string& s){
    
//     if(i>=s.length()/2) return true;
//     if(s[i]!=s[s.length()-i-1]) return false;
    
//     return palindrome(i+1,s);
// }
// TC=O(n/2) SC=O(1)