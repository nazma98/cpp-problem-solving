#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int moves = 0;

    for(int i=1; i<n; i++){
        if(arr[i]< arr[i-1]){
            moves += arr[i-1] - arr[i];
        }
    }

    cout<<moves<<endl;
    return 0;
}