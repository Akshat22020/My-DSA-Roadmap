#include<iostream>
using namespace std;
int factorial(int n){
    int factorial_num = 1;
    if(n==0 || n==1){
        return 1;
    }
    factorial_num = n * factorial(n-1);
    return factorial_num;
}
int main(){
    int n=0;
    cout<<"Enter a number to find its factorial "<<endl;
    cin>>n;
    int fact = factorial(n);
    cout<<"The factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}