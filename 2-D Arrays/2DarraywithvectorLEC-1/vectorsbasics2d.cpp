#include<iostream>
// #include<vector>
#include<algorithm>
using namespace std;
int main(){
    //given 2d array of nXn size
    int n;
    cout<<"enter the number of columns";
    cin>>n;
    int m;
    cout<<"enter the number of rows";
    cin>>m;
    int arr[m][n];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //creating a vector of vectors to store the 2d array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=arr[j][i];
        }
    }
    cout<<"the transposed array is"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}