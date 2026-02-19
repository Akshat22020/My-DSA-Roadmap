#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:"; 
    cin>>n; 
    int last_digit=0;
    int rev=0;
    while(n>0){
        last_digit=n%10;
        rev=rev*10;
        rev=rev+last_digit;
        n=n/10;
    }
    cout<<rev;
}