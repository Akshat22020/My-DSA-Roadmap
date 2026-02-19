#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i =2; i<=n-1; i++){
        if(n%i==0){
            cout<<n<<"For:"<<i<< "is a composite number:"<<endl;
        }
        else{
            cout<<n<<"For:"<<i<< "is not a composite number:"<<endl;
    }
}
    // if(count>1){
    //     cout<<"Composite Number";
    // }
    // else{
    //     cout<<"Not a Composite Number";
    // }
}