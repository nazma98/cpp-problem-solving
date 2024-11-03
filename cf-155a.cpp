#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    int i, j, answer=0;
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
   int min= arr[0], max = arr[0];

   for(i=1; i < n ; i++) {
    if (arr[i] > max)
    {
        max = arr[i];
        answer++;
    } else if(arr[i]< min) {
        answer++;
        min = arr[i];
    }
    
   }

    cout<<answer<<endl;
    return 0;
}