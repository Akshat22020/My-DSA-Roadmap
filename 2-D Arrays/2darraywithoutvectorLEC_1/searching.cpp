#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows: ";
    cin>>m;
    int n;
    cout<<"Enter the number of columns: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The elements of the array are: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int num;
    cout<<"Enter the number to be searched: ";
    cin>>num;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==num){
                cout<<"The element  is at: "<<i<<","<<j<<endl;
                break;
            }
        }
    }
    cout<<&arr[0][0]<<endl;
    cout<<&arr[1][1]<<endl;
    cout<<&arr[2][2]<<endl;
  
}