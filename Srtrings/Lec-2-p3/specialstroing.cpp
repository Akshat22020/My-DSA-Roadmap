#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    s="akshat"; //only small letters
    vector<int> arr(26,0);
    for(int i=0;i<s.size();i++){
        int ch=s[i];
        int ascii=(int)ch;
        arr[ascii-97]++;
}
int mx=0;
for(int i=0;i<26;i++){
    if(arr[i]>mx){
        mx=arr[i];
    }
}
for(int i=0;i<26;i++){
    if(arr[i]==mx){
        char ch=(char)(i+97);
        cout<<ch<<" "<<mx<<endl;
    }
}
return 0;
}