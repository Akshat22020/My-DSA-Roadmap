#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number you want to check the last occurance of:";
    cin>>x;
    vector<int>v;
    for(int i=0;i<5;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<"\t";
    }
    cout<<endl;
    // for(int i=0;i<v.size();i++){
    //     if(v.at(i)==x ){
    //         cout<<"The index is:"<<i<<endl;
    //     }
    // }
    //to check the last occurrance , check from back of the array;
    for(int i=v.size()-1;i>=0;i--){
        if(v.at(i)==x ){
            cout<<"The index is:"<<i<<endl;
            break;
        }
    }
}