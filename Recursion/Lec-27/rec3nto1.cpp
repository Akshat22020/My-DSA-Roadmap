#include<iostream>
using namespace std;
int count(int n){
    cout<<n<<endl;
    if(n==1) return 0;
    count(n-1);
}
int main(){
    int n=0;
    cout<<"Enter a number to count down from "<<endl;
    cin>>n;
    count(n);
    return 0;
}
