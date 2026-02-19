#include<iostream>
using namespace std;
int sum(int sum1ton, int n){
    if(sum1ton<=n){
        return sum1ton + sum(sum1ton+1, n);
    }
    return 0;
}
int main(){
    int n=0;
    cout<<"Enter a number to sum from 1 to n "<<endl;
    cin>>n;
    int result = sum(0, n);
    cout<<"The sum from 1 to "<<n<<" is "<<result<<endl;
    return 0;
}