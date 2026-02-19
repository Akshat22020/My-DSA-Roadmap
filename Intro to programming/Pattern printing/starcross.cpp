#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
   
    for(int i=1;i<=n;i++){
         
        for(int j=1;j<=n;j++){
           if(i==j || i+j==n+1)//for first row, i=1 and j=1, so i==j, for the last row, i=n and j=n, so i+j=n+1 say n=5 and 5+1 =6 so 
           //i+j=n+1
           {
               cout<<"* ";
           }
           else{
               cout<<"  ";
           }
        }
        cout<<endl;
    }
}