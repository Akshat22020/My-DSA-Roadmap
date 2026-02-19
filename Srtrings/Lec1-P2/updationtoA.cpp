#include<iostream>
#include<String>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string:";
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(i%2==0){
            str[i]='a';
        }
        
        }
    cout<<str<<endl;
    return 0;
    }