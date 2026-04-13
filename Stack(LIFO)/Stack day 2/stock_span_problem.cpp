#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    //previous element index array form karo
    int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pgI[n];

    st.push(0);
    pgI [0] = -1;


    for(int i = 1;i<n ; i++){
        // pop safely

        while(st.size() > 0 && arr[st.top()] <= arr [i]){
            st.pop();
        }

        //ans me value daalo

        if(st.size() == 0) pgI [i] = -1;
        else pgI [i] = st.top();
        //st me arr[i] push karo har samay
        st.push(i); // IMPORTANT
    }

    for(int i = 0; i < n; i++){
       pgI[i]= i-(pgI [i]);
    }

    for(int i=0;i<n;i++){
        cout<<pgI[i]<<" ";
    }

}