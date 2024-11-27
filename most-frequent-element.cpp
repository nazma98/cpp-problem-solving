// Problem: Find the Most Frequent Element
// Given an array of integers, find the element that occurs most frequently.
// If there are multiple elements with the same highest frequency, return any one of them.
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, int> frequncy_map;
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        int num;
        cin>>num;
        frequncy_map[num]++;
    }

    for (auto it = frequncy_map.begin(); it != frequncy_map.end(); it++)
    {
        cout<<"Number "<<it->first<<" frequency"<<it->second<<"\n";
    }
    
    return 0;
}