#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int gcd(int a , int b){
    if(a==0){
        return b;
    }
    else return gcd(b%a , a);
    
}
int main(){
    int a = 24;
    int b = 36;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
    return 0;
}