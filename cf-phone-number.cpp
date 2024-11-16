#include<bits/stdc++.h>
using namespace std;

int main(){
    int num_card;
    cin>>num_card;
    string digits;
    digits = "";
    char ch;
    int cnt = 0;

for (int i = 0; i < num_card; i++)
    {
        cin>>ch;
        if(ch == '8'){
            cnt++;
        }
        digits += ch;
    }

    int rest = num_card - cnt;
    int min_card = num_card / 11;
    int total_pn = min(cnt, min_card);

    cout<<total_pn<<endl;

    return 0;
}