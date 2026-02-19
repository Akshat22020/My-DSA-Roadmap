#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    cout<<"[";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"]";
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<endl<<"[";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"]";

}