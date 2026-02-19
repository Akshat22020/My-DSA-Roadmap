#include<iostream>
#include<vector>
#include<string>
using namespace std;
void duplicatestr(string ans , string org, vector<string>&v , bool check){
    if(org==""){
        v.push_back(ans);
        return;
    }
   char ch=org[0];
   if(org.length()==1){
       duplicatestr(ans+ch,org.substr(1),v,true);
       duplicatestr(ans,org.substr(1),v,true);
       return;
   }
  char dh = org[1];
  if(ch == dh && check==true){
    if(check == true) duplicatestr(ans+ch,org.substr(1),v,true);
    duplicatestr(ans,org.substr(1),v,false);
  }
    else{
        if(check==true)duplicatestr(ans+ch,org.substr(1),v,true);
         duplicatestr(ans,org.substr(1),v,true);
   
}
}



int main(){
string str= "aaab";
vector<string>v;
duplicatestr("",str,v,true);
for(int i=0 ; i<v.size() ; i++){
    cout<<"{"<<v[i]<<"}"<<endl;
}
return 0;
}