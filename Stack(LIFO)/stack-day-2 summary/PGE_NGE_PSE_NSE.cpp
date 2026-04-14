#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={3,1,2,5,6,8,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    stack<int>st;

    int pge[n]; //previous greatest element
    st.push(arr[0]);
    pge[0]=-1;
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }

        if(st.size()==0) pge[i]=-1;
        else{
            pge[i]=st.top();
        }

        st.push(arr[i]);
    }
    cout<<"Previous greatest :"<<" ";
    for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
    cout<<endl;

    while(!st.empty()) st.pop();  // for emptying the stack


    int nge[n]; //next greatest element
    st.push(arr[n-1]); //start from last element , push in the stack
    nge[n-1]=-1;   // store -1 in the nge[n-1] cause last element ka next hamesha hiii -1 hihoga
    for(int i=n-1;i>=0;i--){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }

        if(st.size()==0) nge[i]=-1;
        else{
            nge[i]=st.top();
        }

        st.push(arr[i]);
    }
    cout<<"next greatest :"<<" ";
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }

    while(!st.empty()) st.pop();  // for emptying the stack


    cout<<endl; 


    int pse[n]; //previous greatest element
    st.push(arr[0]);
    pse[0]=-1;
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()>=arr[i]){  // jabtak st.top bada hai arr[i] se tabtak pop karo
            st.pop();
        }
        if(st.size()==0) pse[i]=-1;
        else{
            pse[i]=st.top();
        }

        st.push(arr[i]);
    }
    cout<<"Previous smallest :" << " ";
    for(int i=0;i<n;i++){
        cout<<pse[i]<<" ";
    }
    cout<<endl;

 while(!st.empty()) st.pop();  // for emptying the stack
 
     int nse[n]; //next greatest element
    st.push(arr[n-1]); //start from last element , push in the stack
    nse[n-1]=-1;   // store -1 in the nge[n-1] cause last element ka next hamesha hiii -1 hihoga
    for(int i=n-1;i>=0;i--){
        while(st.size()>0 && st.top()>=arr[i]){
            st.pop();
        }

        if(st.size()==0) nse[i]=-1;
        else{
            nse[i]=st.top();
        }

        st.push(arr[i]);
    }
    cout<<"next smallest :"<<" ";
    for(int i=0;i<n;i++){
        cout<<nse[i]<<" ";
    }
}