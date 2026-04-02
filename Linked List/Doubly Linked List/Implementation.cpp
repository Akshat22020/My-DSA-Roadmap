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

class DLL{
        public:
        Node*head=NULL;
        Node*tail=NULL;
        int size;
        DLL(){
            head=tail=NULL;
            size=0;
        }
// ---------------------------Insertion-------------------------- //
//Inserting at the Tail 
        void insertAttail(int val){
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
        void insertAthead(int val){
            Node*temp=new Node(val);
            if(size==0) head=tail=temp;
            else {
                temp->next=head;
                head->prev=temp;
                head = temp;
            } 
            size++;
        }
//Inserting at any specified IDX
        void insertAtIdx(int idx , int val){
            if(idx<0 || idx>size)cout<<"Invalid insertion"; 
            else if(idx==0) insertAthead(val); //first node me  add 
            else if(idx==size) insertAttail(val); //last node me add
            else{
                Node*t=new Node(val);
                Node*temp=head;
                for(int i = 1;i<=idx-1;i++){
                    temp=temp->next;
                }
                t->next=temp->next; 
                temp->next=t;
                t->prev=temp;
                t->next->prev=t;
                size++;
            }
        }

// -------------------------------Deletion---------------------------- //
        void deleteAtHead(){
            if(size==0) cout<<"List is empty";
            else if(size==1) head=tail=NULL;
            else if (size>1) {
                head=head->next;
                head->prev=NULL;
                size--;
            }
        }
        void deleteAtTail(){
            if(size==0) cout<<"List is empty";
            else if(size==1) head=tail=NULL;
                Node *temp=tail->prev;
                temp->next=NULL;
                tail=temp;
                size--;
            
        }
        void deleteAtIdx(int idx){
            if(idx<0 ||idx>=size) cout<<"Invalid deletion";
            else if(idx==0) return deleteAtHead();
            else if(idx==size-1) return deleteAtTail();
            else{
                Node*temp=head; 
                for(int i=1;i<=idx-1;i++){
                    temp=temp->next;
                }
                
                temp->next=temp->next->next;
                temp->next->prev=temp;
                size--;
            }
        }
//To display the Linked List *HAHAHAAAA*
    void display(){
         Node*temp = head;
         while(temp!=NULL){
             cout<<temp->val<<" ";
             temp=temp->next;
    }
} 
// fetching an element from index idx
        int getatidx(int idx){
            if(idx<0 || idx>=size) cout<<"Invalid- element not found\t\n";
            else if(idx==0) return head->val;
            else if(idx==size-1) return tail->val;
            else{
                Node*temp=head;
                for(int i=1;i<=idx-1;i++){
                    temp=temp->next;
                }
                return temp->val;
            }

        }
   

};
int main(){
    DLL list;
    list.insertAttail(10);
    list.insertAttail(20);
    list.insertAttail(30);
    list.display();

    cout<<endl;
    list.insertAttail(40);
    list.display();
    cout<<endl;

    list.insertAthead(50);
    list.display();
    list.insertAtIdx(2,60);
    cout<<endl;
    list.display();
}