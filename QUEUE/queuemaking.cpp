#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    //push
    //pop
    //front -> top
    //size , empty
    //back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    //Insertion happens only from the back
    //Pop only happens at front
    //front()--> access the front of queue
    //back()--> access from the back of the queue
    //size() -> calculate the size of the queue
    //empty() --> check if the queue has elements or not 

    //OVERFLOW happens only when we implement queue using array/vector or when memory is done for

    //UNDERFLOW happens whenever queue is empty and we try to use functions like -> pop() , top() , front() , back()
}