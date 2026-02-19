#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int sum=0;
    int last_digit=0;
    while(n>0){
    last_digit = n% 10;
    sum+=last_digit;
        n=n/10;

    }
    cout<<sum;
}