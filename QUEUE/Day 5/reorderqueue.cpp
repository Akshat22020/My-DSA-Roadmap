#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void pushAtBottom(stack<int>&st , int ele){
    if(st.size()==0) {
        st.push(ele);
        return;
    }
    int x=st.top();
    st.pop();
    pushAtBottom(st , ele);
    st.push(x);
}
void reverse(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    reverse(st);
    pushAtBottom(st,x);
}
void display(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void displayqueue(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
        int x=q.front();
        q.pop();
        cout<<x<<" ";
        q.push(x);

    }
}

int main(){
    stack<int>st;
    queue<int>q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    int n=q.size();
    for(int i=0;i<n/2;i++){
        int x=q.front();
        q.pop();
        pushAtBottom(st , x);
    }
    display(st);
    cout<<endl;
    displayqueue(q);

    while(q.size()<n){
        q.push(st.top());
        st.pop();
        int x = q.front();
        q.pop();
        q.push(x);
    }
    cout<<endl;
    displayqueue(q);
    

}