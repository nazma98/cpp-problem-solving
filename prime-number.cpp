#include<iostream>
using namespace std;

bool isPrime(int num){
    for(int i = 2; i*i <= num; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cin>>num;
    
    if(isPrime(num)){
        cout<<num<<" is prime\n";
    } else {
        cout<<num<<" is not prime\n";
    }
    return 0;
}