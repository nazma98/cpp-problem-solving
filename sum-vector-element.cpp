// Write a function that takes a vector of integers as input and returns the sum of its elements.
#include<bits/stdc++.h>
using namespace std;

int input_sum(vector<int>& v){
    int n;
    cin>>n;
    int num;
    for(int i=0; i<n; i++){
        cin>> num;
        v.push_back(num);
    }

    int sum = 0;

    for(int i=0; i<n; i++){
        sum += v[i];
    }

    return sum;
}

int main(){
    vector<int>v;

    int sum = input_sum(v);
    cout<<sum<<"\n";
    return 0;
}