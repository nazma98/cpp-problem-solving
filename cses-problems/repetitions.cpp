#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int cnt = 0, max = 0;
    for(int i=1; i<str.length(); i++){
        if(str[i] == str[i-1]){
            cnt++;
            if(cnt>max){
                max = cnt;
            }
        }  else{
                cnt = 0;
        }

    }
    cout<<max+1<<"\n";
    return 0;
}