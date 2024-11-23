// Create a vector of integers, insert 5 at the second position, and remove the third element. Print the vector.
#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2,4,6,8,10,12};

    v.insert(v.begin()+1, 5);

    for(auto it = v.begin(); it!= v.end(); it++) {
        cout<<*it<<" ";
    }

    cout<<"\n";

    return 0;
    
} 


