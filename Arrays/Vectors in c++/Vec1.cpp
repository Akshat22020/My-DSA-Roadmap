#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int arr2[6];
    for(int i=0;i<5;i++){
        arr2[i]=arr[i];
    }
    arr2[5]=6;
    for(int i=0;i<6;i++){
        cout<<arr2[i]<<" ";
    }
}