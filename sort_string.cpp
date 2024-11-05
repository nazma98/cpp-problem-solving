

#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<string>& arr){
    int n = arr.size();
    string temp;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j+1]< arr[j]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }
}

int main(){
    vector<string>words = {"banana", "apple", "grape", "berry"};

    bubblesort(words);

    for(int i=0; i<words.size(); i++){
        cout<<words[i]<<",";
    }
    cout<<endl;
    return 0;
}

