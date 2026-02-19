#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    int power = 1;
    //calculating the value of a power b
    for(int i=1;i<=b;i++){
        power=power*a;
    } 
    cout<<power;
}