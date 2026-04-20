//insert valie--> at tail
// delete value --> at head
//size--> size of the linked list
// front--> head->val
//back--> tail->val
//
#include<iostream>
using namespace std;


//creating structure for the linked list
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    } 
};


//Class for adding , deleting and displaying Linked List and also for implementing Linked List
class Queue{
        public:
        Node*head=NULL;
        Node*tail=NULL;
        int size;
        Queue(){
            head=tail=NULL;
            size=0;
        }

        void push(int val){
            Node*temp=new Node(val);//brand new node banaya
            if(size==0) head=tail=temp;//if empty add on first
            else {
                tail->next=temp;
                tail = temp;
            }
            size++;
        }


        void pop(){
            if(size==0) cout<<"List is empty";
            else if(size==1) head=tail=NULL;
            else if (size>1) {
                Node*temp=head;
                head=head->next;
                size--;
                delete(temp); //No wastage!
            }
        }


    void display(){
         Node*temp = head;
         while(temp!=NULL){
             cout<<temp->val<<" ";
             temp=temp->next;
    }
} 
    
    int front(){
        if(size==0){
            cout<<"Queue is Empty";
            return -1; 
        }
        return head->val;
    }


    int Size(){
        return size;
    }

    bool empty(){
        if(size==0) return true;
        else return false;
    }
};
int main(){
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    cout<<endl;

    q.push(50);
    q.push(60); // should show "Queue is full"
    q.display();
   cout<<endl;
    q.pop();
    q.display();
}