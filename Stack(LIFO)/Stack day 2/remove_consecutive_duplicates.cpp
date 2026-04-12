#include<iostream>
#include<stack>
#include<string>
using namespace std;
void displayRev(stack<char>&temp){
    if(temp.size()==0) return;
    char x=temp.top();
   
    temp.pop();
    
     cout<<x<<" ";
     displayRev(temp);
    temp.push(x);
}
int main(){
    string s="aaabbcddaabffg";
    stack<char>st;
    int i=1;
    st.push(s[0]);
    while(i<s.size()){
        if(s[i]!=st.top()) st.push(s[i]);
        else i++;
    }
    stack<char>temp;
    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    displayRev(temp);

}