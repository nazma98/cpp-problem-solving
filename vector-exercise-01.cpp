// Create and Print a Vector
// Create a vector of integers, insert the numbers 1 to 10 into it, and print them.

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.insert(v.begin()+i, i+1);
    }

    for(int i=0; i<10; i++) {
        cout<<v[i]<<" ";
    }

    
    return 0;
}