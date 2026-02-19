#include<iostream>
using namespace std;
int main(){
    //for star printing under a given domain
    // for (int i=0;i<5;i++){
    //     cout<<"*"<<"\n";

    // }
    // for printing any number of numbers assigned by the user
    // int n;
    // cout<<"Enter the number :";
    // cin>>n;
    // for(int i=0; i<=n; i++){
    //     cout<<i<<"\n ";
        
    // }

    // for printing table of 19;
    // int n;
    // cout<<"Enter the number of whose table you want to find:";
    // cin>>n;
    // for(int i=1; i<=10; i++){
    //     cout<<n<<"*"<<i<<"="<<n*i<<"\n";
    // }

//for odd number printing
// int n=10;
//     for(int i=1;i<2*n-1;i++){
//        cout<<i<<"\n";
//        i++;
//     }

//even no. printing
// int n=100;
//     for(int i=0;i<=n;i++){
//        cout<<i<<"\n";
//        i++;
//     }

//GP- 1,2,4,8,16,32,64,128,256,512//
int n=512;
    for(int i=1;i<=n;i=i*2){ 
       cout<<i<<"\n";}
}
