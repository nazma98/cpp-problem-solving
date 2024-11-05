#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    string str = to_string(num);
    int len, i;
    bool isPalindrome = true;
    len = str.length();
    for(i=0; i<len/2; i++){
        if(str[i] != str[len-1-i]){
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome){
        cout<<"Yes"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}