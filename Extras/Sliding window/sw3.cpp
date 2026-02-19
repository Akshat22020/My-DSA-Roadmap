#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[]={2,-3,4,4,-7,-1,4,-2,6};
    int minim=0;
    int k=3;
     int n= sizeof(a)/sizeof(a[0]);
    int ans[n-k+1];
    for(int i =0;i<=n-k;i++){
        for(int j=i;j<i+k;j++){
            if(a[j]<0){
                ans[i]=a[j];
                break;
            }
            else if(a[j]=0){
                break;
            }
        }
 }
    for(int i=0;i<n-k+1;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
 }