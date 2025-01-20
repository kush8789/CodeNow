#include<bits/stdc++.h>
using namespace std;

class Solution{
    // private:
    //     bool linearSearch(vector<int>&a,int num)
    //     {
    //         int n=a.size();
    //         for(int i=0;i<n;i++)
    //         {
    //             if(a[i]==num)
    //                 return true;
    //         }
    //         return false;
    //     }

    // public:
    //     int longestConsecutive(vector<int>& a, int n){
    //         int max_count=1;
    //         for(int i=0;i<n;i++)
    //         {
    //             int x=a[i];
    //             int count=1;
    //             while(linearSearch(a,x+1)==true){
    //                 x+=1;
    //                 count+=1;
    //             }
    //             max_count=max(max_count,count);
    //         }
    //         return max_count;
    //     }


    // public:
        // int longestConsecutive(vector<int>& a, int n){
        //     if(n==0)
        //     {
        //         return 0;
        //     }

        //     sort(a.begin(),a.end());
        //     int count=0;
        //     int max_count=1;
        //     int prev_smaller=INT_MIN;

        //     for(int i=0;i<n;i++){
        //         if(a[i]==prev_smaller+1){
        //             count+=1;
        //         }
        //         else if(a[i]!=prev_smaller){
        //             count=1;
        //         }
        //         prev_smaller=a[i];
        //         max_count=max(max_count,count);
        //     }
        //     return max_count;
        // }
    public:
    int longestConsecutive(vector<int>& a, int n) {
        if (n == 0) return 0;

        int longest = 1;
        unordered_set<int> st;
        for (int i = 0; i < n; i++) {
            st.insert(a[i]);
        }
        for (auto it : st) {
            if (st.find(it - 1) == st.end()) {
                int cnt = 1;
                int x = it;
                while (st.find(x + 1) != st.end()) {
                    x = x + 1;
                    cnt = cnt + 1;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Solution obj;
    cout<<obj.longestConsecutive(a,n);
    return 0;
}

//TC=O(n^2) SC=O(1)
//TC=O(nlogn+n) SC=O(1)
//TC=O(3*n) SC=O(n)