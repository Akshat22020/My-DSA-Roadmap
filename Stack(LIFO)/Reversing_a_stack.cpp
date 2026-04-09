#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40); //TOP

    
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<endl;
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    cout<<endl;
    while(temp.size()>0){
        int x=temp.top();
        cout<<temp.top()<<" ";
        temp.pop();
        st.push(x);
    }
    
    cout<<endl;
}