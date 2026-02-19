#include<iostream>
#include<string>
using namespace std;
int main(){
    char ch1='a'; // single character
    char ch2='b'; // single character   
    char ch3='c'; // single character
    cout<<(int)ch1<<" "<<(int)ch2<<" "<<(int)ch3<<endl; // Output: 97 98 99


// The null character is used to terminate strings in C++.
    // It is represented by '\0' and has an ASCII value of 0.

    char ch4='\0';
    cout<<(int)ch4<<endl; // Output: 0 (null character) 
}