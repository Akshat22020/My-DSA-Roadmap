#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={4,3,2,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag == true){
            break;
        }
    }
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

//Bubble sort complexity : O(n^2) in worst and average case, O(n) in best case
//Space complexity : O(1)
//Stable sort
// length = n , max swaps = n-1, max comparisons = n(n-1)/2