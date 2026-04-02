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

    //insertion//
    Node*insert(Node*head , Node*tail , int index){
        
    }
};
int main(){
    Node*A=new Node(10);
    Node*B=new Node(20);
    Node*C=new Node(30);
    Node*D=new Node(40);
    Node*E=new Node(50);

    A->next=B;
    A->prev=NULL;

    B->next=C;
    B->prev=A;

    C->next=D;
    C->prev=B;

    D->next=E;
    D->prev=C;

    E->next=NULL;
    E->prev=D;

    Node*temp=A;
    while(temp){
        cout<<temp->val  << "->"<< " ";
        temp=temp->next;
    }
    cout<<endl;
    Node*temp2=E;
    while(temp2){
        cout<<temp2->val<<"->"<<" ";
        temp2=temp2->prev;
    }
}