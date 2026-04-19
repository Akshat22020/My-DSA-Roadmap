#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>&q){
    int n=q.size();
    for(int i=1 ; i<=n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int n=q.size();
    for(int i=1;i<=n;i++){ //yahaan q ka size mat likhna warna blunder ho jayega , cause , ghat ta badhta jaa rhaa hai queue ka size
        if(i%2==0) q.pop();
        else{
            int x=q.front();
            q.pop();
            q.push(x);
        }
    }
    display(q);
}