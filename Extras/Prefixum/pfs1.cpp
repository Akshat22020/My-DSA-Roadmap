#include<iostream>
// #include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={9,1,8,6,5,2,4,3,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pref[n];
    pref[0]=arr[0];
    for(int i=1;i<n;i++){
        pref[i]=arr[i]+pref[i-1];
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<pref[i]<<" ";
    }
    cout<<endl;
    int x;
    int y;
    cout<<"Enter the range x and y";
    cin>>x>>y;
    cout<<"The sum of range x and y is:"<<pref[y]-pref[x-1];

}