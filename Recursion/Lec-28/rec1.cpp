#include<iostream>
using namespace std;
int fibonaaci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 1;
    return fibonaaci(n-1)+fibonaaci(n-2); //fibonaaci khud ko do baar call kar rahai haii waao
 
}
int fibonaaci2(int n){
    if(n==1 || n==2){
        return 1;
    }
    int leftAns=fibonaaci2(n-1);
    int rightAns=fibonaaci2(n-2);
    return leftAns+rightAns;

}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"The "<<n<<"th Fibonacci number is: "<<fibonaaci(n)<<endl;
    cout<<"The "<<n<<"th Fibonacci number using euler flow  is: "<<fibonaaci2(n)<<endl;
    return 0;
}  