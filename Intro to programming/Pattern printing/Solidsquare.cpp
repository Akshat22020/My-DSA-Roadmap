#include<iostream>
using namespace std;
int main(){
    int rows;
    int columns;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=rows; j++)// Here, we are using rows instead of columns
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}