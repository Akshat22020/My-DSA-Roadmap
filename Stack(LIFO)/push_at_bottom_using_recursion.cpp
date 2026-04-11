#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void display(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
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
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // pushAtBottom(st,90);
    display(st);
    cout<<endl;
    reverse(st);
    display(st);
}