#include<iostream>
#include<cmath>
using namespace std;
int f(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    int r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
    int factn=f(n);
    int factr=f(r);
    int factnr=f(n-r);
    // for(int i=2;i<=n;i++){
    //     factn*=i;
    // }

    // for(int i=2;i<=r;i++){
    //     factr*=i;
    // }
    // for(int i=2;i<=n-r;i++){
    //     factnr*=i;
    // }

    int comb = factn/(factr*factnr);
    cout<<"The combination of nCr is: "<<comb;

    int perm = factn/factnr;
    cout<<"\nThe permutation of nPr is: "<<perm;

}