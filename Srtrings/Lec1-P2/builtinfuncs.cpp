#include<iostream>
#include<String>
using namespace std;
int main(){
    string str="Hey ! world i am Akshat";
    cout<<str.length()<<endl;

//push_back()
    str.push_back('!');
    cout<<str<<endl;
//pop_back()
    str.pop_back();
    cout<<str<<endl; 
}