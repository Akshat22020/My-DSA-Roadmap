#include<iostream>
using namespace std;
int address(int a , int b ){
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of b is: "<<&b<<endl;
};
int main(){
    int a;
    int b ;
    cout<<"Enter the value of a: ";
    cin>>a; 
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"The address of a and b is "<<&a<<"\n"<<&b<<endl;
    address(a,b);
    return 0;

}