#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin>>n>>q;
    vector<vector<int>> arr(n);
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        arr[i].resize(k);
        for(int j=0; j<k; j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>> qr(q, vector<int>(2));
    for (int i=0; i<q; i++) {
        for(int j=0; j<2; j++) {
            cin>>qr[i][j];
        }
    }   

    for(int i=0; i<q; i++) {
        cout<<arr[qr[i][0]][qr[i][1]]<<"\n";
    }
    return 0;
}
