#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v; //you need not mention size
    v.push_back(1);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl; //capacity of vector
    v.push_back(2);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl; //capacity of vector
    v.push_back(3);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl; //capacity of vector
    v.push_back(4);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl; //capacity of vector
    v.push_back(5);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl; //capacity of vector
    for(int i=0;i<v.size();i++){//v.size() gives the size of vector
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl; //size of vector
    cout<<v.capacity()<<endl; //capacity of vector
}