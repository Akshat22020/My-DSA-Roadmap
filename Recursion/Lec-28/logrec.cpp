#include<iostream>
using namespace std;
int power(int a , int b){
       if (b==0){
           return 1;
       }
       if(b==1){
        return a;
       }
      // return power(a,b/2)*power(a,b/2); cant be done cause , it will call the function two times
       int smallAns=power(a,b/2);
       if(b%2==0){
        return smallAns*smallAns;
       }
       else{
        return a*smallAns*smallAns;
       }

} 
int main(){
    cout<<power(2,3)<<endl; // power(x,y)--> x^y
    return 0;
} 