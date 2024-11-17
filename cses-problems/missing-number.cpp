#include<bits/stdc++.h>
using namespace std;


int main(){
    long long n, num;
    cin>>n;
    long long sum = 0;
    long long sum2 = (n * (n + 1)) / 2;
    n--;
    while(n--){
        cin>>num;
        sum += num;
    }


    cout<<sum2 - sum<<endl;
    return 0;
}