#include<iostream>
#include<stack>
using namespace std;

int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    if(ch=='*' || ch=='/') return 2;
    return 0; // for '('
}

int solve(int val1 , int val2 , char ch){
    if(ch=='+') return val1+val2;
    if(ch=='-') return val1-val2;
    if(ch=='*') return val1*val2;
    return val1/val2;
}

int main(){
    string s="(2+6)*4/8-3";
    stack<int> val;
    stack<char> op;

    for(int i=0;i<s.length();i++){

        // अगर digit है
        if(s[i] >= '0' && s[i] <= '9'){
            val.push(s[i] - '0');
        }

        // opening bracket
        else if(s[i] == '('){
            op.push(s[i]);
        }

        // closing bracket
        else if(s[i] == ')'){
            while(!op.empty() && op.top() != '('){
                char ch = op.top(); op.pop();
                int val2 = val.top(); val.pop();
                int val1 = val.top(); val.pop();
                val.push(solve(val1, val2, ch));
            }
            op.pop(); // remove '('
        }

        // operator
        else{
            while(!op.empty() && op.top() != '(' &&
                  priority(s[i]) <= priority(op.top())){
                
                char ch = op.top(); op.pop();
                int val2 = val.top(); val.pop();
                int val1 = val.top(); val.pop();
                val.push(solve(val1, val2, ch));
            }
            op.push(s[i]);
        }
    }

    // final evaluation
    while(!op.empty()){
        char ch = op.top(); op.pop();
        int val2 = val.top(); val.pop();
        int val1 = val.top(); val.pop();
        val.push(solve(val1, val2, ch));
    }

    cout << val.top();
}