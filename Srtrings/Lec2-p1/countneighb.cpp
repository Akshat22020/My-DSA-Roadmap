#include<iostream>
#include<String>
using namespace std;
int main(){
  string str;
  int count =0;
  cout<<"Enter the string:";
    getline(cin, str);
    for(int i=0; i<str.length(); i++){
        if(str[i]!=str[i+1] && str[i]!=str[i-1]){
            count++;
        }
        else if(str[i] == ' '){
            continue;
        }
}
cout<<"Count of neighbouring characters: "<<count<<endl;
  return 0;
}