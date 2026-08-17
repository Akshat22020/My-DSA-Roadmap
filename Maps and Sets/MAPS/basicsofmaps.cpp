#include<iostream>
#include<unordered_map>
#include<utility>
using namespace std;
int main(){

    unordered_map<string, int> m;

    pair<string , int> p1;
    p1.first="Akshat";
    p1.second=14;
    m.insert(p1);

    m["Shivam"]=15;
    m["Sahil"]=16;


    for(auto p : m){
        cout<<p.first <<" "<<p.second<<endl;
    }

    m.erase("Akshit"); 
    for(auto p : m){
        cout<<p.first <<" "<<p.second<<endl;
    }

    if(m.find("14")!=m.end()){
        cout<<"Exists";}
    else cout<<"Doesn't exist";
    }
