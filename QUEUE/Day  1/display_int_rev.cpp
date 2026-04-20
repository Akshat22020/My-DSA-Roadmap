#include<iostream>
#include<stack>
#include<queue>
using namespace std;
//display func
void display(queue<int>&q){
    stack<int>st;
    int n=q.size();
    while(q.size()){
        int x=q.front();
        st.push(x);
        q.pop();
        
    }
    cout<<endl;

    while(st.size()){
        int x=st.top();
        st.pop();
        q.push(x);
    }

    for(int i=1 ; i<=n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

int main(){
    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.pop();
    display(q);
    q.pop();
    display(q);
    display(q);
    
}