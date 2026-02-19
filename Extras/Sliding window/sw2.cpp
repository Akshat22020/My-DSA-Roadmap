//maximum sumofsubarray using sliding window protocol
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[]={7,1,2,5,8,4,9,3,6};
    int maxsum=INT_MIN;
    int k=3;
    int maxIdx=-1;
    int n= sizeof(a)/sizeof(a[0]);
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    maxsum=sum;
    int i=1;
    int j=k;
    //slidingwindow
    while(j<n){
       sum=sum+a[j]-a[i-1];
        if(maxsum<sum){
            maxsum=sum;
            maxIdx=i;
        }
        
        i++;
        j++;
    }
    
    cout<<maxsum<<"  at  -> "<<maxIdx;
} 