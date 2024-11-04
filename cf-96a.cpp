// link to the problem https://codeforces.com/problemset/problem/96/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    int i, cnt=0;
    int len = str.length();
    if(len<7) {
        cout<<"NO"<<endl;
        return 0;
    }

     for (i=1; i<len; i++){
        if(str[i-1] == str[i]){
            cnt++;
            if(cnt == 6){
                break;
            }
        } else {
            cnt = 0;
        }
    }


    if(cnt == 6){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
    return 0;
}