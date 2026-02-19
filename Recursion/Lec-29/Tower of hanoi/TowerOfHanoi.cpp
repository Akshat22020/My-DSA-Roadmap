#include<iostream>
using namespace std;
int Tower(int n, char a , char b , char c){               //source , helper , destination
    if (n==0) return 0;
    Tower(n-1,a,c,b);
    cout<<a<<"->"<<c<<endl;
    Tower(n-1,b,a,c);
    
}
int  main(){
    int n=4;
    Tower(n , 'A' , 'B' , 'C');
    return 0;
}