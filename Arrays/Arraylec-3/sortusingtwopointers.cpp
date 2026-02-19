#include<iostream>
#include<vector>
using namespace std;
// int swap(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
void sort01m2(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]==0){
            i++;
        }
        else if(v[j]==1){
            j--;
        }
        else{
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
}
int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(0);
    a.push_back(0);
    a.push_back(1);
    a.push_back(0);
    a.push_back(1);
    a.push_back(0);
    a.push_back(1);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sort01m2(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
