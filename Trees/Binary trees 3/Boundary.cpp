#include<iostream>
#include<queue>
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

Node*constructtree(int arr[],int n){
    queue<Node*>q;
    Node*root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node*temp=q.front();
        q.pop();
        Node*l;
        Node*r;
        if(arr[i]!=INT_MIN) l=new Node(arr[i]);
        else l=NULL;

        if(j!=n && arr[j]!=INT_MIN) r =new Node(arr[j]);
        else r=NULL;

        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }


    return root;
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

void leftBoundary(Node*root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);

}

void bottomBoundary(Node*root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    bottomBoundary(root->left);
    bottomBoundary(root->right);
    
}
void rightBoundary(Node*root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->right);
    if(root->right==NULL) leftBoundary(root->left);

}

int main(){
    int arr[]={ 
   
    1,
    2,3,

    4,5,6,7,

    8,9,INT_MIN,10,11,12,INT_MIN,13,

    14,INT_MIN,INT_MIN,INT_MIN,15,INT_MIN,
    INT_MIN,16,17,INT_MIN,

    INT_MIN,18,19,20,INT_MIN,INT_MIN,
    21,22,

    23,INT_MIN

};
    
    int n=sizeof(arr)/sizeof(arr[0]); 
    Node*root=constructtree(arr,n);
    // levelorder(root);
    leftBoundary(root);
    // levelorder(root);
    cout<<endl;
    bottomBoundary(root);


    

}
