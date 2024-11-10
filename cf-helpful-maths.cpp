#include<bits/stdc++.h>
using namespace std;

int main(){
    string str, ans = "";
    cin>>str;
    int arr[4], num;
    memset(arr, 0, sizeof(arr));
    for(int i=0; i<str.length(); i++){
        if(str[i] != '+'){
            num = str[i] - '0';
            // cout<<num<<" ";
            arr[num]++;
        }
    }

    for(int i=1; i<4; i++){
        // cout<<arr[i]<<" ";
        for(int j=0;j<arr[i]; j++){
            if(arr[i]){
                char ch = i+'0';
                ans += ch;
            }
            if(i <= 3 && j != arr[i]){
                ans += '+';
            }
        }

    }
    // cout<<ans;

    for(int i=0; i<ans.length()-1; i++){
        cout<<ans[i];
    }

    cout<<endl;
    return 0;
}