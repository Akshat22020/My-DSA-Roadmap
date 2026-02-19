#include<iostream>
using namespace std;
void star(int x){
    for(int i=0;i<x;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    x++;
}




int main(){
    for(int i=0;i<=5;i++)
        star(i);
    return 0;

}