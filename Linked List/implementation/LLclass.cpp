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
class LinkedList{
        public:
        Node*head=NULL;
        Node*tail=NULL;
        int size;
        LinkedList(){
            head=tail=NULL;
            size=0;
        }
// ---------------------------Insertion-------------------------- //
//Inserting at the Tail 
        void insertAttail(int val){
            Node*temp=new Node(val);//brand new node banaya
            if(size==0) head=tail=temp;//if empty add on first
            else {
                tail->next=temp;
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
                size++;
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
// -------------------------------Deletion---------------------------- //
        void deleteAtHead(){
            if(size==0) cout<<"List is empty";
            else if(size==1) head=tail=NULL;
            else if (size>1) {
                head=head->next;
                size--;
            }
        }
        void deleteAtTail(){
            if(size==0) cout<<"List is empty";
            else if(size==1) head=tail=NULL;
            else if(size>1){
                Node *temp=head;
                while(temp->next!=tail){
                    temp=temp->next; 
                }
                temp->next=NULL;
                tail=temp; //vvimportant
            }
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
                temp->next= temp->next->next;
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

   

};
int main(){
    LinkedList ll;
    ll.insertAttail(10);
    ll.display(); // 10 

    cout<<endl;

    ll.insertAttail(20);
    ll.display(); //10 20

    cout<<endl;

    ll.insertAttail(30);
    ll.insertAttail(40);
    ll.display();  // 10 20 30 40

    cout<<endl;

    ll.insertAthead(50);
    ll.display(); // 50 10 20 30 40

    cout<<endl;

    ll.insertAtIdx(3,80);
    ll.display(); // 50 10 20 80 30 40

    cout<<endl;

    ll.insertAtIdx(5,90);
    ll.display(); // 50 10 20 80 30 90 40

    cout<<endl;

    cout<<ll.size; // 7

    cout<<endl;
 
    cout<<ll.getatidx(5);  // 90
    cout<<endl;

    ll.deleteAtHead();
    ll.display();    // 10 20 80 30 90 40    (50 is removed from head)

    cout<<endl;

    ll.deleteAtTail();
    ll.display();    // 10 20 80 30 90  (40 is removed from tail)

    cout<<endl<<ll.size;  // 5

    cout<<endl;

    ll.deleteAtIdx(3);
    ll.display();   // 10 20 80 90 (deleted from 3rd index i.e 30)

    cout<<endl;
    cout<<ll.size;  // 4
}