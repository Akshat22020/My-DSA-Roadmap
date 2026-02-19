#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number to search for the absolute result";
    cin>>n;
    if(n>0){
        cout<<"The absolute value of number you have entered is :"<<n;

    }
    else if(n<0){
        cout<<"The absolute value of number you have entered is :"<<-n;
    }
    else{
        cout<<"The absolute value of number you have entered is :"<<0;
    }


}