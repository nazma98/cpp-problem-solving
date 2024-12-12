#include<iostream>
#include<vector>
using namespace std;

void sieveOfEratosthenes(vector<bool>&prime, int num) {
    prime[0] = prime[1] = false;
    for(int i=2; i*i <= num; i++) {
        if(prime[i]){
            for(int j = i*i; j<=num; j+= i) {
                prime[j] = false;
            }
        }
    }
}

int main(){
    int num;
    cin>>num;
    vector<bool>prime(num+1, true);
    sieveOfEratosthenes(prime, num);
    return 0;
}