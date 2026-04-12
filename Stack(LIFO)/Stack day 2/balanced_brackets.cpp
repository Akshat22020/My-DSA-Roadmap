#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isBalanced(string a){
    stack<char> st;

    for(int i = 0; i < a.size(); i++){
        if(a[i] == '('){
            st.push(a[i]);
        }
        else if(a[i] == ')'){
            if(st.empty()){
                return false;
            }
            st.pop();
        }
    }

    return st.empty(); // true if balanced
}

int main(){
    string a = "()()()";

    if(isBalanced(a)) cout << "Balanced";
    else cout << "Not Balanced";

    return 0;
}