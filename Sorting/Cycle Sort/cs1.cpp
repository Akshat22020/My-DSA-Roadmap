#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={4,1,6,2,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before cycle sort-->";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //cycle sort
    int i=0;
    while(i<n){
        int ci=arr[i]-1;  //correct index;
        if(i==ci) i++;
        else swap(arr[i],arr[ci]);
    }
        cout<<"Array after cycle sort-->";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}