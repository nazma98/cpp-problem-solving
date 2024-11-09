#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a, b;
    cin>>a>>b;
    int sum_candies = 0;

    for(int i=a; i<= b; i++){
        sum_candies += arr[i];
    }

    cout<<sum_candies<<endl;
    return 0;
}