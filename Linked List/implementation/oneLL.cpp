#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(Node*head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
}

void insertAtEnd(Node*head,int v){
    Node*new_el = new Node(v); //new value that we want
    while(head->next!=NULL) head=head->next;
    head->next=new_el;
}
void insertAtHead(Node*head , int v){
    Node*new_el = new Node(v);
    if(head=NULL) new_el=head;
    else{
        new_el->next=head;
        head=new_el;
    }
}
int main(){ 
    Node * a = new Node(10);
    Node * b = new Node(20);
    Node * c = new Node(30);
    Node * d = new Node(40);
    Node * e = new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    display(a);
    cout<<endl;
    insertAtEnd(a,60);
    cout<<endl;
    display(a);
     cout<<endl;
    insertAtHead(a,50);
     cout<<endl;
    display(a);

}