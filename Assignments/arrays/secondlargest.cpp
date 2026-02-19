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
    int second=INT_MIN;
    for(int i =0 ;i<size;i++){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second && arr[i]!=first){
            second = arr[i];
        }
    }
    cout<<"The largest element in the array is: "<<first<<endl;
    cout<<"The second largest element in the array is: "<<second<<endl;
    return 0;
}