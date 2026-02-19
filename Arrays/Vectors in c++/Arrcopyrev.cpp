#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int>v;
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    cout<<"The elements of the array are:";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // vector<int>v1;
    
    cout<<"The elements of the array in reverse order are:";
    for(int i=n-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
}