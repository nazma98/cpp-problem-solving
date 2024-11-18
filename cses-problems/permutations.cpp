#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, i;
    cin >> n;

    if (n > 1 && n < 4) {
        cout << "NO SOLUTION" << endl;
    } else if(n == 1) {
        cout<<n<<endl;
    } else {
        vector<long long> even, odd; // No pre-allocation

        for (i = 1; i <= n; i++) { // Loop must go up to n
            if (i % 2 == 0) {
                even.push_back(i);
            } else {
                odd.push_back(i);
            }
        }

        for (auto x : even) cout << x << " ";
        for (auto x : odd) cout << x << " ";

        cout << endl;
    }

    return 0;
}