#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin, s); // Use getline to read the entire line including spaces
    int len = s.length();
    if(len%2==0){
        cout<<s.substr((len/2),len)<<endl;
    }
   return 0; 
}