#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows in matrix";
    cin>>m;
    int n;
    cout<<"Enter the number of columns in matrix";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){  //input
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is: "<<endl;
    for(int i=0;i<m;i++){   //output
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int minc=0;
    int maxc=n-1;
    int minr=0;
    int maxr=m-1;
    while(minc<=maxc && minr<=maxr){
        //right
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        //down
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        //left
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        //up
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
}
}
