#include<iostream>
#include<vector>
using namespace std;
void printSubstr(string ans , string org,int idx , vector<string> &v){
   
    if(idx==org.length()){
        v.push_back(ans);
        return;
    }
     char ch=org[idx];
    printSubstr(ans,org,idx+1 , v);
    printSubstr(ans+ch,org,idx+1,v);
}



int main(){
vector<string> v;
string str= "abc";
printSubstr("",str,0 , v);
for(int i=0 ; i<v.size() ; i++){
    cout<<"{"<<v[i]<<"}"<<endl;
}
return 0;
}

