#include<iostream>
using namespace std;
int binary_to_decimal(string &binary){
    int n=binary.size();
    int result=0;
    for(int i =n-1;i>=0;i--){
        char ch=binary[i];
        int num = ch-'0'; //ascii of binary[i] - 0 --> 0 hua toh 0  , 1 hua toh 1 (num ka value)
        result+=num*(1 << (n-i-1));
    } 
    return result;
}

string decimal_to_binary(int num){
    string result2=" ";
    while(num>0){
        if(num%2==0){
        result2='0'+result2;
    }
    else {
        result2='1'+result2;
    }
    // num= num/2;
    num=num>>1;
    }
    return result2;
    
    
}
int main(){
    string str="001011";
    cout<<binary_to_decimal(str)<<" "<<endl;
    int number=12;
    cout<<decimal_to_binary(number)<<" "<<endl;
    return 0;
}