#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int * ptr=arr;
    cout<<arr<<endl; // address of first element
    cout<<&arr[0]<<endl; // address of first element
    int *ptr2=&arr[0];
    cout<<ptr2<<endl; // address of first element   
    // int*ptr3=arr[0]; // this is wrong, arr[0] is an int, not an int pointer
    // cout<<ptr3<<endl; // this is wrong, arr[0] is an int, not an int pointer
    int a=3;
    int *ptr3=&a; // this is correct, ptr3 points to the address of a
    ptr[0]=10; // this is correct, ptr points to the first element of arr
    cout<<arr[0]<<endl; // this will print 10, as we changed the first element of arr to 10
    for(int i=0;i<5;i++){
        cout<<ptr[i]<<" "; // this will print the elements of arr
    }
}