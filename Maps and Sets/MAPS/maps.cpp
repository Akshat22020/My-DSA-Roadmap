#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int , int> m;
    m[4]=103;
    m[5]=104;
    m[1]=100;
    m[3]=102;
    m[2]=105;
    
    

    for(auto x : m){
        cout<<x.first<<" "<<x.second<<" ";
    }

    //key ke hisaab se sorting hoti hai , jaise 1,2,3,4,5 ke particular values ke hisaab se hi sorting hoti hai !

}