#include<iostream>
using namespace std;
string decimal_to_binary(int num){
    string result="";
    while(num>0){
       if(num%2==0){
        result= "0"+result;
       }
       else{
        result ="1"+result;
       }
       num=num>>1;
    }
    return result;
}
int main(){
    int number=13;
    string res=decimal_to_binary(number);
    int len= res.length();
    int count =0;
    for(int i=0;i<len;i++){
        if(res[i]=='1') count++;
    }
    cout<<"The number of set bits in the given decimal to binary interpretetion is :"<<count;
} 