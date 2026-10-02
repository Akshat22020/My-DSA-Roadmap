#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    int arr[]={6,5,3,2,8,10,9};
    priority_queue<int,vector<int>,greater<int>>pq;
    int cost=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }


    while(pq.size()>1){
        int a = pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        pq.push(a+b);
        cost+=(a+b);
    }
    cout<<cost;

}