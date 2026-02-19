#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[]={2,-3,4,4,-7,-1,4,-2,-6};
    int n = sizeof(a)/sizeof(a[0]);
    int prevNeg=1;
    int k=4;
    int i=1;
    int j=k;
    int p=-1;
    int ans[n-k+1];  //kyuki agar 'a' array ka size n hai, toh har iterations ke baad k-1 elements chooth jayega jo ki humare ans array me nahi ayega
    //p --> jo negative store kar raha hai
 
    for(int i=0;i<k;i++){
        if(a[i]<0){
             p=i;
            break;
        }
    }
    if(p==-1){
        ans[0]=1;// agar pehle window me koi bhi negative nahi tha toh first index of ans me 1 store karwa do
    }
    else ans[0]=a[p];
    //sliding window
    while(j<n){
       if(p>=i){
        ans[i]=a[p];
       }
       else {
         p=-1;
         for(int x=i;x<=j;x++){
            if(a[x]<0){
                p=x;
                break;
            } 
        }
        if(p!=-1) ans[i]=a[p];
       else ans[i]=1;
       }
       
       i++;
       j++;
    }
    

    for(int i=0;i<n-k+1;i++){
        cout<<ans[i]<<" ";
    }

} 
