#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,3,5,1,2};
    int n=5;
    for(int i =0 ;i<n ; i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;

   for(int i=0 ; i<n;i++){ 
    int j=i;
    while(j>=1&& arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
    }
}
 for(int i =0 ;i<n ; i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;

}