#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    int arr[]={3,1,2,5,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans [n];

    st.push(arr[0]);
    ans [0] = -1;

    for(int i = 1;i<n ; i++){
        // pop safely
        while(st.size() > 0 && st.top() <= arr [i]){
            st.pop();
        }
        //ans me value daalo
        if(st.size() == 0) ans [i] = -1;
        else ans [i] = st.top();
        //st me arr[i] push karo har samay
        st.push(arr [i]); // IMPORTANT
    }

    for(int i = 0; i < n; i++){
        cout << ans [i] << " ";
    }
}