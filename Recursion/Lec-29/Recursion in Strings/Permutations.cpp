#include<iostream>
#include<vector>
#include<string>
using namespace std;
void permutation(vector<string>&v,string ans , string org){
    if(org.length() == 0){
        v.push_back(ans);
        return;
    }
    for(int i=0;i<org.length();i++){
        char ch = org[i];
        string left = org.substr(0,i);
        string right = org.substr(i+1,org.length());
        permutation(v,ans+ch,left+right);
    }
}


int main(){
vector<string>v;
string str= "123";
// string left = str.substr(0,2);
// cout<<left<<endl<<" ";
// string right = str.substr(2+1,4);
// cout<<right<<endl;
permutation(v,"" , str);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}