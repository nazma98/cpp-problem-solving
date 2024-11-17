#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int prefixSum[n];
    memset(prefixSum, 0, sizeof(prefixSum));
        for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
        prefixSum[i] += arr[j];
        }
        

    }

    for (int i = 0; i < n; i++)
    {
        cout<<prefixSum[i]<< " ";
    }
    
    

    return 0;
}