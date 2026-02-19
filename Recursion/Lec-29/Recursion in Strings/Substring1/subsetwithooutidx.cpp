#include<iostream>
#include<string>
using namespace std;
void printsubstr(string ans , string org){
    if(org==""){
        cout<<ans<<endl;
        return;
    }
   char ch=org[0];
   printsubstr(ans+ch,org.substr(1));
   printsubstr(ans,org.substr(1));
   
}



int main(){
string str= "abc";
printsubstr("",str);

return 0;
}
