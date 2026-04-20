#include<iostream>
#include<deque>
using namespace std;

int display(deque<int>&dq){
    deque<int> temp;
    while(dq.size()>0){
        int x = dq.front();
        dq.pop_front();
        cout<<x<< "  ";
        temp.push_back(x);
    }
}
int main(){
    deque<int> dq;

    dq.push_back(2);
    dq.push_back(4);
    dq.push_front(5);
    display(dq);
}