#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){ //i denotes the starting index of the subarray
        for(int j=i;j<size;j++){ // j denotes the ending index of the subarray
            for(int k=i;k<=j;k++){ // k is used to print the elements from starting to ending index
                cout<<arr[k]<<" ";
            }
            cout<<endl;      
        }
    }
}