#include<iostream>
using namespace std;
int main(){
    int a[10];
    int sum=1;
    cout<<"Enter 10 elements of the array: ";
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int i=0;i<10;i++){
        sum+=a[i];
    }
    cout<<"The sum of the elements of the array is: "<<sum<<endl;
}