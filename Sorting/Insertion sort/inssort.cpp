#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int n=5;
   for(int ele : arr){
    cout<<ele<<" ";
   }
   
cout<<endl;
for(int i=1;i<n;i++){
    int j=i;
    while( j>=1 && arr[j]<arr[j-1]){
      swap(arr[j],arr[j-1]);
        j--;
    }
} 
  for(int ele : arr){
    cout<<ele<<" ";
   }
    return 0;
}