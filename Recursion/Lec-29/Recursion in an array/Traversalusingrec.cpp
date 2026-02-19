#include<iostream>
using namespace std;
int array(int arr[], int n , int i){
    if(i==n) return 0;
    cout<<arr[i]<<" ";
    array(arr , n , i+1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    array(arr , n , 0);
    return 0;
}