#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of array:";
    cin>>size;
    int arr[size];
    cout<<"enter the elements of array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int first=INT_MIN;
    for(int i =0 ;i<size;i++){
        if(arr[i]>first){
            first = arr[i];
        }
    }
    cout<<"The largest element in the array is: "<<first<<endl;
    return 0;
}