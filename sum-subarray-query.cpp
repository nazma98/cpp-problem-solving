#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int ar[N];
int pr[N];
int main(){
    int ar[] = {3, 6, 2 ,8, 9, 2};
    int n = sizeof(ar) / sizeof(ar[0]);

    // calculate prefix sum
    pr[0] = ar[0];
    for(int i=1; i<n; i++){
        pr[i] = pr[i-1] + ar[i];
    }

    // for(int i=0; i<n; i++) {
    //     cout<<pr[i]<<" ";
    // }
    int q = 4;
    vector<vector<int>> query = {{2,3}, {4, 6}, {1,5},{3, 6}};
    cout<<endl;
    return 0;
}