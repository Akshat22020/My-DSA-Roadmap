#include<iostream>
#include<string>
using namespace std;
int main(){
 string s1="abc";
 string s2="def";
 string s3=s1+s2; 
cout<<s3<<endl; // Concatenation of strings
 cout<<s1+s2<<endl; // Direct concatenation in cout
 cout<<s1+"xyz"<<endl; // Concatenation with a string literal
 cout<<s1+'x'<<endl; // Concatenation with a character
 cout<<s1+s2+'x'<<endl; // Concatenation of multiple strings and a character
 cout<<s1+s2+s1+s2<<endl; // Concatenation of multiple strings
 return 0;
}