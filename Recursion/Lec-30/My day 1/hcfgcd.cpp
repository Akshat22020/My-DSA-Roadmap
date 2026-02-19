#include<iostream>
#include<vector>
using namespace std;
int gcd(int a , int b){
    for(int i=min(a,b); i>=2; i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
}
int main(){
    int a = 24;
    int b = 36;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
    return 0;
}