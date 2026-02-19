#include<iostream>
using namespace std;
int main(){
    int x=123;
    int y=0;
    while(x>0){
        y=y*10+x%10;
        x/=10;
    }
    cout<<y;

}