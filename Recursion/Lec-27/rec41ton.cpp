#include<iostream>
using namespace std;
int count(int n){
    
    if(n==0) return 0;
   
    count(n-1);
     cout<<n<<endl; // returning recurrance 
}
int main(){
    int n=0;
    cout<<"Enter a number to count down from "<<endl;
    cin>>n;
    count(n);
    return 0;
}
