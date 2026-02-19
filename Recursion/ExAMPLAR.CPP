#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
string str= "abcd";
str.erase(1,1);
cout<<"{"<<str.substr(0,4)<<"}"<<endl;
return 0;
}
