#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter lines:";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j==i || j==2*n-i && i<=n){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }
}