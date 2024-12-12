#include<iostream>
#include<vector>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a%b);
}

int main(){
    int num;
    cin>>num;
    vector<int>nums(num+1);
    for(int i=0; i<num; i++) {
        cin>>nums[i];
    }

    int result = nums[0];
    for(int i=1; i<num; i++) {
        result = gcd(result, nums[i]);
    }
    cout<<result<<endl;
    return 0;
}