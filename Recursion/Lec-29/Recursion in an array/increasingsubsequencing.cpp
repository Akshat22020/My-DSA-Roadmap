#include <iostream>
#include<vector> 
using namespace std;

int printSubset(int arr[],int n ,int idx , vector<int>ans,int k) { 
    if(idx==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
        }   
        cout<<endl;
        return 0;
    }
    if(ans.size()+(n-idx)< k){ // code ko jaldi kar diya isnee broooo
        return 0;
    }
    printSubset(arr , n , idx+1,ans,k); //empty subset
    ans.push_back(arr[idx]);
    printSubset(arr , n , idx+1,ans,k);//pushed back the current idx element
    return 0;
}

int main() {
    int arr[]={1,2,3,4};
    vector<int>v;
    int n=sizeof(arr)/sizeof(arr[0]);
    printSubset(arr,n,0,v,3);
    return 0;
}