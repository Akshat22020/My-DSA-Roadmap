#include<iostream>
#include<queue>
using namespace std;

int main(){
    int arr[]={10,20,-4,6,18,24,105,118};
    priority_queue<int>pq;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }

    vector<int>ans;

    while(pq.size()>0){
        int a=pq.top();
        pq.pop();
        ans.push_back(a);
    }

    //reverse - sorted order biatchhh
    //say y-th smallest element in max-heapified array
    int y=4;
    cout<<ans[ans.size()-y];

}