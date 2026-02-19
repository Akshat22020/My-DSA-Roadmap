#include<iostream>
#include<algorithm>
#include<String>
using namespace std;
int main(){
  string s = "abcdef";
  cout<<s<<endl; // Original string
  reverse(s.begin(), s.end()); // Reverse the string
  cout<<s<<endl; // Reversed string

    reverse(s.begin()+2, s.end()-1); // Reverse the string
  cout<<s<<endl; // Reversed string
  return 0;
}
 