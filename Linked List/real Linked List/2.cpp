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
    //10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    //forming linked list 
    a.next=&b;
    b.next=&c;
    c.next=&d;


    Node temp =a ; // ek naya d-type jisme initially a ka values stored hai

    while(1){ 
        cout<<temp.val<<" ";
        if(temp.next==NULL){
            break;
        }
        temp=*(temp.next);
    } 

}