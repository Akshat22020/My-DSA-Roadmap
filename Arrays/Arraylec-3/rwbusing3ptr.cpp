#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void printarrat(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort012(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    int mid=0;
    while(mid<=j){
        if(v[mid]==0){
            swap(v[i],v[mid]);
            i++;
            mid++;
        }
        else if(v[mid]==1){
            mid++;
        }
        else{
            swap(v[mid],v[j]);
            j--;
        }
    }
}
int main(){
    int lo;
    int hi;
    int mid;
    vector<int> a;
    a.push_back(2);
    a.push_back(0);
    a.push_back(2);
    a.push_back(1);
    a.push_back(0);
    a.push_back(1);

}