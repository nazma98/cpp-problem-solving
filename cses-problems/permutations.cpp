#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, i;
        cin>>n;
    vector<long long> even(n), odd(n);


    if(n < 4){
        cout<<"NO SOLUTION"<<endl;
    } else {
        for(i=1; i<n; i++){
            if(i%2 != 0){
                odd.push_back(i);
            } else {
                even.push_back(i);
            }
        }

        for(i=1; i<n; i++){
            cout<<"Even "<<even[i];
        }

    }


    return 0;
}