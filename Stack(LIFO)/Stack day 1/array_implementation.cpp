#include<iostream>
#include<vector>
using namespace std;
class Stack{
    public:
    int arr[5];
    int idx=-1;
    void push(int ele){
        if(idx==4){
            cout<<"Stack is full";
            return;
        }
        idx++;
        arr[idx]=ele;
    }
    void pop(){
        if(idx==-1){
            cout<<"Stack is Empty";
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"Stack is Empty";
            return -1;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size();
    st.pop();

    cout<< endl << st.size();


}