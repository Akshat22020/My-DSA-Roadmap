#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i, int j, vector<int> &arr){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int k;
    cout<<"Enter the number of values you want to rotate:";
    cin>>k;

    vector<int>v1;
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(7);
    v1.push_back(4);
    v1.push_back(8);
    int n=v1.size();

    display(v1);
    reversepart(0,n-k-1,v1);
    reversepart(n-k,n-1,v1);
    display(v1);
    reversepart(0,n-1,v1);
    display(v1);    
}