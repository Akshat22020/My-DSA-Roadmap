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
void displaytree(Node*root){
    if(root==NULL) return;
    cout<<root->val;
    displaytree(root->left);
    displaytree(root->right);
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

    //to sum the nodes
    cout<<"sum is :" <<sum(a);
    cout<<endl;

    //to find the size of tree
    cout<<"size is:"<<S(a);
    cout<<endl;

    //to find the maximum value in the tree
    cout<<"maximum value is :"<<maximof(a);
    cout<<endl;

    //to find the minimum value in the tree
    cout<<"minimum value is:"<<miniof(a);
    cout<<endl;

    //to find the product of the nodes of a tree
    cout<<"Product is:"<<product(a);
    cout<<endl;

    //to find the level
    cout<<"Level is:"<<levels(a);
    cout<<endl;

    //to find the height of 



}