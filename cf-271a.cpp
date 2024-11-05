// link to the problem https://codeforces.com/problemset/problem/271/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int prev_year, next_year, i, cnt=0, j;
    cin>>prev_year;
    string str;
    for(i=prev_year+1; i<= 9000; i++) {
        str = to_string(i);
        sort(str.begin(), str.end());
        cout<<str<<endl;
        for(j=1; j<4; j++) {
            if(str[j-1] == str[j]){
                continue;
            } else{
                cnt++;
            }
        }
        if(cnt==3){
            next_year = i;
            break;
        }

    }
    cout<<next_year<<endl;
    return 0;
}