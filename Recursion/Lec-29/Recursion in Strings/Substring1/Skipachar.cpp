#include<iostream>
using namespace std;
// void removeChar(string ans , string org){
//     char ch=org[0];
//     if(org.length()==0){
//         cout<<ans;
//         return;
//     }
//     if(ch=='a') removeChar(ans,org.substr(1));
//     else removeChar(ans+ch,org.substr(1));
// }

void removeChar(string ans , string org,int idx){
   
    if(idx==org.length()){
        cout<<ans;
        return;
    }
     char ch=org[idx];
    if(ch=='a') removeChar(ans,org,idx+1);
    else removeChar(ans+ch,org,idx+1);
}



int main(){
string str= "akshat raj";
removeChar("",str,0);

return 0;
}












//Loop example
/*string s="";
for(int i =0 ; i<str.length() ; i++){
    if(str[i]!='a'){
       s+=str[i];
}}
cout<<s; */