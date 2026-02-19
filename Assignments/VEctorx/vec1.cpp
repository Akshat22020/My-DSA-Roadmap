#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v1;
    v1.push_back(1);
    cout<<v1.capacity()<<endl;
    v1.push_back(2);
    cout<<v1.capacity()<<endl;
    v1.push_back(3);
    cout<<v1.capacity()<<endl;
    v1.push_back(4);
    cout<<v1.capacity()<<endl;
    v1.push_back(5);
    cout<<v1.capacity()<<endl;
    v1.push_back(6);
    cout<<v1.capacity()<<endl;
}