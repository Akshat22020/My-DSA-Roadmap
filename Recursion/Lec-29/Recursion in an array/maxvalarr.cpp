#include<iostream>
#include<climits>
using namespace std;
int maxval(int arr[] , int n , int i , int max){
    if(i==n){  //base case
        cout<<max;
        return 0;
    }

    if(max<arr[i]){
        max=arr[i];  //updating max after comparing
    }
    maxval(arr , n , i+1 , max); //recursion call for checking the next index
}
int maxInArray(int arr[] , int n , int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx], maxInArray(arr , n , idx+1));
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxval(arr , n , 0 , INT_MIN);
    cout<<endl;
    cout<<maxInArray(arr , n , 0);
    return 0;
}