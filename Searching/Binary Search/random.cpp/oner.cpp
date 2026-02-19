#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int max=INT_MIN;
    int arr[]={3,2,2,4,1,4};
    int n= 6;
    int sum=0;
    for(int i=0;i<n;i++){
            if(max<arr[i]) max= arr[i];
            sum+=arr[i];
        }
        cout<<sum;
        cout<<max;
}
