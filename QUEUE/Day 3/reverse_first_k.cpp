#include<iostream>
#include<queue>
#include<stack>
using namespace std;
// #include<deque>
void display(queue<int>&q){
    int n=q.size();
    for(int i=1 ; i<=n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    //reversing k first elements
    int k=3;
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    stack<int>st;
    for(int i=0;i<k;i++){
        int x = q.front();
        st.push(x);
        q.pop();
    }

    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }

    int s=q.size();

    for(int i=0;i<s-k;i++){
        int x=q.front();
        q.pop();
        q.push(x);
    }

    display(q);
    

}