#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class LinkedList{
    public:
    public:
        Node*head=NULL;
        Node*tail=NULL;
        int size;
        LinkedList(){
            head=tail=NULL;
            size=0;
        }
    void InsertAtHead(int val){
        Node*temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next = head;
            head=temp;
        }
        size++;
    }

    void InsertAtTail(int val){
        Node*temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next=temp;
            temp->next=NULL;
        }
        size++;
    }

    void InsertAtAnyNode(int val , int idx){
        Node*temp=new Node(val);
        if(size==0) InsertAtHead(val);
        else if(idx==size) InsertAtTail(val);
        else {
            Node*temp1=head;
            for(int i=0;i<idx-1;i++){
                temp1=temp1->next;
            }
            temp->next=temp1->next;
            temp1->next=temp;
            size++;
        }
    }

};