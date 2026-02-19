//3sum
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v1;
    int x;
    cout<<"Enter the number ";
    cin>>x;
    int s;
    cout<<"Enter the elements of the array ";
    for(int i=0;i<x;i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    cout<<"The elements of the array are ";
    display(v1);
    for(int i = 0; i < v1.size() - 1; i++) { // the code goes upto the socond last number in array
        for(int j = i + 1; j < v1.size(); j++) {// the code goes upto the lst number in array
            if(v1[i]+v1[j]==s){
                cout<<"("<<i<<","<<j<<")";
            }
        }
    }

}