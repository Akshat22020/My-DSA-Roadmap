#include<iostream>
#include<algorithm>
using namespace std;
bool idPalindrome(string s){
    int i = 0;
    int j = s.length()-1;
    while(i<j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
}
int main(){
    string a = "racecar";
    if(idPalindrome(a)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
}