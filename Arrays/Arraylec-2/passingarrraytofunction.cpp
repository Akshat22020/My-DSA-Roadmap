#include<iostream>
using namespace std;
void display (int arr[]){ //int arr[] can also be written as int *arr(as they are both pointers and hold the addressess of the first element of the array)
    for(int i =0;i<=4;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return;
}
void swap(int arr2[]){
    int temp = arr2[0];
    arr2[0] = arr2[4];
    arr2[4] = temp;
    return;
}
int main(){
    int a[5]={1,2,3,4,5};
    display(a);
    swap(a);
    display(a);
} 