#include <iostream>
#include<vector>
using namespace std;

int printSubset(int arr[],int n ,int idx , vector<int>ans) { 
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return 0;
    }   
    printSubset(arr , n , idx+1,ans); //empty subset
    ans.push_back(arr[idx]);
    printSubset(arr , n , idx+1,ans);//pushed back the current idx element
    return 0;
}

int main() {
    int arr[]={6,2,0,0,9,5,4,3,9,2};
    vector<int>v;
    int n=sizeof(arr)/sizeof(arr[0]);
    printSubset(arr,n,0,v);
    return 0;
}