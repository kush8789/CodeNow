#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> Leaders(vector<int>& a, int n) {
        // vector<int> v;
        // for (int i = 0; i < n; i++) {
        //     bool leader = true;
        //     for (int j = i + 1; j < n; j++) {
        //         if (a[i] <= a[j]) {
        //             leader = false;
        //             break;
        //         }
        //     }
        //     if (leader) {
        //         v.push_back(a[i]);
        //     }
        // }
        // return v;

        vector<int>v;
        int max = a[n - 1];
        v.push_back(max);
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] > max) {
                max = a[i];
                v.push_back(max);
            }
        }
        reverse(v.begin(), v.end());
        return v;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    Solution sol;
    vector<int> v = sol.Leaders(a, n);

    for (vector<int>::size_type i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}


//TC=O(n^2) SC=O(n)
//TC=O(n) SC=O(n)