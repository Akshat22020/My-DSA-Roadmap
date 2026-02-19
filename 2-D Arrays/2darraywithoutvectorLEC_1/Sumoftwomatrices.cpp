#include<iostream>
using namespace std;
int main(){

int m;
cout<<"Enter the number of rows: ";
cin>>m;
int n;

cout<<"Enter the number of columns: ";

cin>>n;
int arr1[m][n];
cout<<"Enter the elements of the array: "<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr1[i][j];
    }

}
cout<<"The elements of the array are: "<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
}
int arr2[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr2[i][j];
    }

}
cout<<"The elements of the array are: "<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
}
int res[n][m];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        res[i][j]=arr1[i][j]+arr2[i][j];
    }
}
cout<<"The sum of the two arrays is: "<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<res[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
}