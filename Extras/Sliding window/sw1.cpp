//maximum sumofsubarray using sliding window protocol
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[]={7,1,2,5,8,4,9,3,6};
    int maxsum=INT_MIN;
    int k=3;
    int maxIdx=-1;
    int lastIdx=-1;
    int n= sizeof(a)/sizeof(a[0]);
    for(int i =0;i<=n-k;i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum+=a[j];
        }
        if(maxsum<sum){
            maxsum=sum;
            maxIdx=i;
            lastIdx=i+k-1;

        }
    }
    cout<<maxsum<<"  at  -> "<<maxIdx<<"  ends at  -> "<<lastIdx;
}