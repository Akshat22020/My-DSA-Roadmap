#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={19,12,23,8,16};
    int n =5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    vector<int>v(n,0);                     // to mark visited elements
    int x=0;

    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int mindx=-1;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;  //if visited , skip 
            else{
                if(min>arr[j]){  // find minimum among unvisited
                    min=arr[j]; // update min
                    mindx=j;   // update index of min
                }
            }
        }
        arr[mindx]=x;     // assign rank
        v[mindx]=1;      // mark visited
        x++;            // increment rank
        
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}