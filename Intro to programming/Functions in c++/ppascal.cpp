#include<iostream>
using namespace std;
int f(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int combination(int n, int r){
    int factn=f(n);
    int factr=f(r);
    int factnr=f(n-r);
    int comb = factn/(factr*factnr);
    return comb;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}