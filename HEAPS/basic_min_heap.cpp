#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(10);
    pq.push(102);
    pq.push(122);
    pq.push(1);

    vector<int>ans;

    while(pq.size()>0){
        int a=pq.top();
        pq.pop();
        ans.push_back(a);
    }

    //sorted order biatchhh
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}