#include<iostream>
using namespace std;
int main(){
    int n=1;
    int factorial=1;
    cout<<"Enter the number:";
    cin>>n;
    for(int i =1;i<=n;i++){
        factorial=factorial*i;
    }
    cout<<factorial;
}