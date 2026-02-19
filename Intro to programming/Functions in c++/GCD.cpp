#include<iostream>
using namespace std;
int gcd(int a, int b){
    int hcf;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
               hcf=i;
        }
    }
    return hcf;
}
int main(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"The GCD of a and b is: "<<gcd(a,b);
  
}