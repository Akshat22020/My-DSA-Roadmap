#include<iostream>
using namespace std;
int main(){
    int arr[]={24,25,29,30,31,32,33};
    int n=10;
    for(int i =0 ; i<n; i++){
        if(arr[i]+1 == arr[i+1]){
            continue;
        }
        else{
            cout<<arr[i]+1;
            break;
        }
    }

    
}