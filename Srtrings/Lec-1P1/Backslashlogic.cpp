#include<iostream>
#include<string>
using namespace std;
int main(){
char c='\0';
cout<<c<<endl; // Output: (empty line, as c is a null character)
string str="Hello";
cout<<str<<endl; // Output: Hello
string str2="\0"; 
cout<<str2<<endl; // Output: (empty line, as str2 is an empty string)
}