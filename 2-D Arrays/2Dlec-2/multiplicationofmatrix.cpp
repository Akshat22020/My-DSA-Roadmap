#include<iostream>
#include<vector>
using namespace std;
int main(){
int m;
cout<<"Enter the number of rows OF m1: ";
cin>>m;
int n;
cout<<"Enter the number of columns of m1: ";
cin>>n;
// m1 is of size m*n
int p;
cout<<"Enter the number of rows OF m2: ";
cin>>p;
int q;
cout<<"Enter the number of columns of m2: ";
cin>>q;
int arr1[m][n];
int arr2[p][q];

if(n!=p){
    cout<<"Matrix multiplication is not possible"<<endl;
    return 0;
}
else{
    cout<<"Enter the elements of m1: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the elements of m2: "<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>arr2[i][j];
        }
    }
    int res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<n;k++){
                res[i][j]+=arr1[i][k]*arr2[k][j]; //used += for addition of the product of the elements
            }
        }
    }
    cout<<"The result of multiplication of m1 and m2 is: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }


}
}
