#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
     int target;
     int n=10;
     int arr[]={1,2,3,4,5,6,7,8,9,10};
     cout<<"Enter the target element to search: ";
        cin>>target;
    int mid=(n-1)/2;
    int first=0;
    int last=n-1;
    bool found=false;
    for(int i=0;  i<n;i++){
        if(arr[mid]==target){
            cout<<"Element found at index: "<<mid<<"{ "<<arr[mid]<<"is the element!! } "<<endl;
            found=true;
            break;
        }
        else if(arr[mid]>target){
            last=mid-1;
            mid=(first+last)/2;
        }
        else{
            first=mid+1;
            mid=(first+last)/2;
        }
    }
    if(!found){
        cout<<"Element not found"<<endl;
    }
    return 0;
}