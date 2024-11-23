// Write a function that takes a vector of integers and returns a reversed version of the vector.
#include<bits/stdc++.h>
using namespace std;

void reverseVector(vector<int>& v) {
    reverse(v.begin(), v.end());
}

int main(){
    vector<int>v;

    int n;
    cin>>n;
    int num;
    for(int i=0; i<n; i++) {

        cin>>num;
        v.push_back(num);
    }

    reverseVector(v);

        for(int i=0; i<n; i++) {
            cout<<v[i]<<" ";
    }

    cout<<"\n";

    return 0;
}