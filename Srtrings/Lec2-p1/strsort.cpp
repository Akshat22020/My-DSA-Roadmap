#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin, str);
    // Sort the string
    sort(str.begin(), str.end());
  cout<< str;
//The sort function sorts the string on the basis of the ascii value codes
}