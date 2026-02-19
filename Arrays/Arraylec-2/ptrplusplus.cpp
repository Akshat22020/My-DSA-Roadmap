#include<iostream>
using namespace std;
int main(){
int arr[]={4,3,2,4,6};
int *p=arr;
for(int i =0; i<=4;i++){
    cout<<*p<<" "; // this will print the elements of arr
    p++; // this will increment the pointer to point to the next element of arr
    // cout<<endl<<&p[i]<<endl;
}
}