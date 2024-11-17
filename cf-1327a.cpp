// link to problem https://codeforces.com/problemset/problem/1327/A

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast_io; // Enable fast input and output
    
    int t;
    cin >> t; // Input the number of test cases
    while (t--) {
        long long n, k;
        cin >> n >> k; // input for a single test case
        if(k*k <= n && (k%2 == n%2)) {
            cout<< "YES\n";
        } else {
            cout<< "NO\n";
        }

    }

    return 0;
}