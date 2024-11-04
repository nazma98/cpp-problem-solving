#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][3];
    int force;
    int sum = 0, i, j, cnt = 0;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }

       for ( j = 0; j < 3; j++)
    {
        for ( i = 0; i < n; i++)
        {
            sum += arr[i][j];
        }
        if(sum == 0) {
            cnt++;
        }
                
    }



    if(cnt == 3) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    
    return 0;
}