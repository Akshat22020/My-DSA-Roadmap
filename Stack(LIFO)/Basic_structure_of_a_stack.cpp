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

    //putting elements back in st from temp

    while(temp.size()>0){
        int x=temp.top();
        temp.pop();
        st.push(x);
        
    }
    cout<<endl;


    cout<<endl;

    // while(temp.top()){
    //     cout<<temp.top()<<endl;
        
    //     temp.pop();
    // }
}