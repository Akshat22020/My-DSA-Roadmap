#include<iostream>
using namespace std;
int power(int a , int b ){
    int p=1;
    for(int i=1;i<=b;i++){
        p*=a;
    }
    return p;
}
//using recursion
int powerRec(int a , int b ){
    if(b==0) return 1;
    return a*powerRec(a,b-1);}
int main(){
    int a,b;
    cout<<"Enter the base and exponent "<<endl;
    cin>>a>>b;
    int result = power(a,b);
    cout<<a<<" raised to the power "<<b<<" is "<<result<<endl;
    int resultRec = powerRec(a,b);
    cout<<a<<" raised to the power "<<b<<" using recursion is "<<resultRec<<endl;
    return 0;
}