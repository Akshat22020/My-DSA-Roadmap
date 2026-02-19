#include<iostream>
using namespace std;
void pip(int n){
    if(n==0) return;
    cout<<n<<endl;
    cout<<endl;
    pip(n-1);
    cout<<n<<endl;
    cout<<endl;
    pip(n-1);
    cout<<n<<endl; 
}
int main(){
    cout<<endl;
    pip(1);
    cout<<endl;
    return 0;
}