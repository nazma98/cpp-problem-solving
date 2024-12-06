#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size){
    int temp;
    for(int i=0; i < size; i++){
        for(int j = 1; j < size - i +1; j++){
            if(arr[j-1] > arr[j]) {
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {2, 4, 10, 8, 3 , 12, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, len);

    for(int i=0 ; i< len; i++) {
        cout<<arr[i] <<" ";
    }
    cout<<endl;

    return 0;
}