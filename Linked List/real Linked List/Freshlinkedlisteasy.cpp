#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){ 
        this->val=val;
        this->next=NULL; //class ke val me v ki value store karo do 
    }
};

int main(){
    Node*a = new Node(10);
    Node*b = new Node(20);
    Node*c = new Node(30);
    Node*d = new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    Node * temp=a; //temp ke andar a ka  address store hora hai 
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

//a->val matlab , a address pe jo value padi hai , usko utha ke laao 