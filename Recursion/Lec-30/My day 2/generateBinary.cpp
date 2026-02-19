#include<iostream>
#include<string>
using namespace std;
int n = 3;
void generate (string s  ){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    if ( s=="" ||s[s.length()-1]=='0'){
        generate(s+'0');
        generate(s+'1');
    }
    else{
        generate(s+'0');
    }
    
    
}
int main(){
    // int n = 3;
    generate("");
}