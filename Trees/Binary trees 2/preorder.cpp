#include<iostream>
#include<math.h>
#include<algorithm>
#include<climits>
using namespace std;
class Node{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void displaytree(Node*root){ //preorder
    if(root==NULL) return;
    cout<<root->val;
    displaytree(root->left);
    displaytree(root->right);
}

void displayinor(Node*root){ //inorder

    if(root==NULL) return;

    displayinor(root->left); //call 1

    cout<<root->val; //kaam
    
    displayinor(root->right); //call 2
}

void displaypost(Node*root){ //inorder

    if(root==NULL) return;

    displayinor(root->left); //call 1

    displayinor(root->right); //call 2

    cout<<root->val; //kaam
}
int sum(Node*root){
    if(root==NULL) return 0;
    int ans= root->val+sum(root->left)+sum(root->right);
    return ans;   //recursion
}
int S(Node*root){
    if(root==NULL) return 0;
    
    int Size = 1 +  S(root->right)+ S(root->left);
    return Size;
}

int maximof(Node*root){
    if(root == NULL) return INT_MIN ;
    int lmax=maximof(root->left);
    int rmax = maximof(root->right);
    return max(root->val , max(lmax , rmax));
    
}

int miniof(Node*root){
    if(root == NULL) return INT_MAX ;
    int lmax=miniof(root->left);
    int rmax = miniof(root->right);
    return min(root->val , min(lmax , rmax));
    
}

int product(Node*root){
    if(root==NULL) return 1;
    int ans= root->val*product(root->left)*product(root->right);
    return ans;   //recursion
}

int levels(Node*root){
    if(root==NULL) return 0;
    return 1 +  max(levels(root->right), levels(root->left));
}





int main(){
    Node*a=new Node(1);
    Node*b=new Node(2);
    Node*c=new Node(3);
    Node*d=new Node(4);
    Node*e=new Node(5);
    Node*f=new Node(6);
    Node*g=new Node(7);

    a->left=b;
    a->right=c;

    b->left=d;
    b->right=e;

    c->left=f;
    c->right=g;
    //to display
    displaytree(a);
    cout<<endl;

    displayinor(a);
    cout<<endl;

    displaypost(a);
}