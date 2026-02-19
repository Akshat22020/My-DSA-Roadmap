#include<iostream>
#include<String>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;;
    int n=s.length();
    if(n%2==0){
        // If the length is even, reverse the first half
        reverse(s.begin(), s.begin() + n / 2);
        cout<<s<<endl; // Output the modified string
    } else {
        // If the length is odd, reverse the first half and append the middle character
        reverse(s.begin(), s.begin() + n / 2);
        s = s.substr(0, n / 2 + 1) + s[n / 2] + s.substr(n / 2 + 1);
    }
}