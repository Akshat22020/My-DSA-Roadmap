#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n) ;i++){
        if(n%i==0) return false;
    }
    return true;
}
void printFactors(int n){
    for(int i=1;i<=sqrt(n);i++){ //complexity-->     O(sqrt(n))
       if(n%i==0) cout<<"("<<i<<" "<<n/i<<" "<<")";
    }
}
int main(){
    cout<<isPrime(6); 
    cout<<endl;
    printFactors(49);
}