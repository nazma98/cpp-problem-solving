#include<iostream>
#include<vector>
using namespace std;

int main(){
    int num;
    cin>>num;
    vector<bool>prime(num+1, true);
    sieveOfEratosthenes(prime, num);
    return 0;
}