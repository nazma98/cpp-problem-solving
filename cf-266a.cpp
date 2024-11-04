// link to problem https://codeforces.com/problemset/problem/266/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    char ch;
    int i,cnt=0;
    for(i=0;i<n; i++){
        cin>>ch;
        str += ch;
    }

    for ( i = 1; i < n; i++)
    {
        if(str[i] == str[i-1]){
            cnt++;
        }
    }
    

    cout<<cnt<<endl;
    return 0;
}