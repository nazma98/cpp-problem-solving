#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin>>s>>t;

    vector<int> freq (26, 0);
    for(int i = 0; i< s.length(); i++){
        char ch = s[i];
        freq[ch - 'a']++;
    }

    for(int i=0; i<t.length(); i++){
        char ch = t[i];
        freq[ch - 'a']--;
    }

    for(int i=0; i<26; i++){
        if(freq[i]){
            cout<<"not anagram"<<"\n";
            return 0;
        }
    }
    cout<<"anagram\n";
    return 0;
}