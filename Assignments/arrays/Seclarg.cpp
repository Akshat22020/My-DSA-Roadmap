//to find the second larget element in an arrqay in one pass
//using two variables
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int first = INT_MIN;
    int second = INT_MIN;
    int size;
    cout<<"enter the size of array:";
    cin>>size;
    int arr[size];
    cout<<"enter the elements of array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i =0 ; i<size;i++){
        if(arr[i]<second && second!=first){
            second = arr[i];
        }
    }
    cout<<"The second largest element in the array is: "<<second<<endl;
    return 0;

}