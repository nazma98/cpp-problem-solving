#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int arr[N];
int freq[N];

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n-1; i++) {
        cin>>arr[i];
 
    }


    for(int i=0; i<n; i++) {
        freq[arr[i]]++;
    }

        for(int i=1 ; i<=n; i++) {
        cout<<freq[i]<<endl;
    
    }

    for(int i=1; i<=n; i++){
        if(freq[i] == 0) {
            cout<<freq[i]<<endl;
            break;
        }
    }
    return 0;
}