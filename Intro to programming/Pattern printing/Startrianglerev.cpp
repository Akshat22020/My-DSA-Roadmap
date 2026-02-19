#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        //number of stars in this particular examples can be calculated by (n+1)-i
        //since the number of stars in the first row is n, the number of stars in the last row is 1
        //so the number of stars in the ith row is (n+1)-i
        for(int j=1;j<=n+1-i;j++){
            cout<<"* "<<" ";
        }
        cout<<endl;
    }
}