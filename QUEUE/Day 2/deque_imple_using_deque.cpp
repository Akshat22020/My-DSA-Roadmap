#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node*next;
    Node*prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};

class Deque{
        public:
        Node*head=NULL;
        Node*tail=NULL;
        int size;
        Deque(){
            head=tail=NULL;
            size=0;
        }
// ---------------------------Insertion-------------------------- //
//Inserting at the Tail 
        void pushback(int val){
            Node*temp=new Node(val);//brand new node banaya
            if(size==0) head=tail=temp; //if empty add on first
            else {
                tail->next=temp;
                temp->prev=tail;
                tail = temp;
            }
            size++;
        }
//Inserting at the Head
        void pushfront(int val){
            Node*temp=new Node(val);
            if(size==0) head=tail=temp;
            else {
                temp->next=head;
                head->prev=temp;
                head = temp;
            } 
            size++;
        }

// -------------------------------Deletion---------------------------- //
        void popfront(){
            if(size==0) cout<<"List is empty";
            else if(size==1) head=tail=NULL;
            else if (size>1) {
                head=head->next;
                head->prev=NULL;
                size--;
            }
        }
        void popback(){
            if(size==0) cout<<"List is empty";
            else if(size==1) head=tail=NULL;
                Node *temp=tail->prev;
                temp->next=NULL;
                tail=temp;
                size--;
            
        }
//To display the Linked List *HAHAHAAAA*
    void display(){
         Node*temp = head;
         while(temp!=NULL){
             cout<<temp->val<<" ";
             temp=temp->next;
    }
} 

   

};