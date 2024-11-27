#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, int> wordcount;
    wordcount["apple"] = 1;
    wordcount["banana"] = 3;
    cout<<"Count of apples "<<wordcount["apple"]<<"\n";
    return 0;
}