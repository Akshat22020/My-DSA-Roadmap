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


int levels(Node*root){
    if(root==NULL) return 0;
    return 1 +  max(levels(root->right), levels(root->left));
}

void DONL(Node*root, int lev , int reql){
    if(root==NULL) return ;
    if(lev==reql){
        cout<<root->val<<" ";
        return;
    }
    DONL(root->left,lev+1,reql);//call1
    DONL(root->right,lev+1, reql);//call2
    
}
//BFS using DONL
void BFS(Node*root , int curl , int finlev)
{
    if(root==NULL) return ;
    if(curl<=finlev) cout<<root->val<<" "<<endl;
    BFS(root->left , curl+1 , finlev);
    BFS(root->right , curl+1, finlev);
}

//level order tra
void levelorder(Node*root){
    int n = levels(root);
    for(int i=1;i<=n;i++){
        DONL(root , 1 ,i);
        cout<<endl;
    }
} 

//right to left trav
void DONrtol(Node*root, int lev , int reql){
    if(root==NULL) return ;
    if(lev==reql){
        cout<<root->val<<" ";
        return;
    }
    DONrtol(root->right,lev+1, reql);//call2
    DONrtol(root->left,lev+1,reql);//call1
    
}
void levelorderleftorig(Node*root){
    int n = levels(root);
    for(int i=1;i<=n;i++){
        DONrtol(root , 1 ,i);
        cout<<endl;
    }
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

    // BFS(a , 1 , 3 );

        // DONrtol(a,1,1);
        // DONrtol(a,1,2);
        // DONrtol(a,1,3);

        // levelorder(a);

        levelorderleftorig(a);
        


}