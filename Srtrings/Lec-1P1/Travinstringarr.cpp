#include<iostream>
#include<string>
using namespace std;
int main(){
    char str[]={'a','b','c','d','e','f'}; 
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" "; // Output: a b c d e f 
  
    }

//or we can directly combiningly call or print the whole array as a string 
cout<<str; // Output: abcdef
}