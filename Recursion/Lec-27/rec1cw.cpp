#include <iostream>
#include<algorithm>
using namespace std;
void printhello(int n ){
    if(n==0){
        return;
    }
    cout<<"Good Morning babe"<<endl;
    printhello(n-1);
}
int main(){
    int n=0;
    cout<<"Enter the number of times you want to print hello "<<endl;
    cin>>n;
    printhello(n);
    return 0;
}