#include<iostream>
#include<stack>
using namespace std;

int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    if(ch=='*' || ch=='/') return 2;
    return 0; // for '('
}
string solve(string val1 , string val2 , char ch){
    //we have to store prefix in the answer 
    //operator val1 val2
    string s="";
    s.push_back(ch);
    s+=val1;
    s+=val2;
    return s;
}
int main(){
    string s="(2+6)*4/8-3";
    stack<string> val;
    stack<char> op;

    for(int i=0;i<s.length();i++){

        // अगर digit है
        if(s[i] >= 48 && s[i] <= 57){
            val.push(to_string(s[i] - 48));
        }

        // opening bracket
        else if(s[i] == '('){
            op.push(s[i]);
        }

        // closing bracket
        else if(s[i] == ')'){
            while(!op.empty() && op.top() != '('){
                char ch = op.top(); op.pop();
                string val2 = val.top(); val.pop();
                string val1 = val.top(); val.pop();
                val.push(solve(val1, val2, ch));
            }
            op.pop(); // remove '('
        }

        // operator
        else{
            while(!op.empty() && op.top() != '(' &&
                  priority(s[i]) <= priority(op.top())){
                
                char ch = op.top(); op.pop();
                string val2 = val.top(); val.pop();
                string val1 = val.top(); val.pop();
                val.push(solve(val1, val2, ch));
            }
            op.push(s[i]);
        }
    }

    // final evaluation
    while(!op.empty()){
        char ch = op.top(); op.pop();
        string val2 = val.top(); val.pop();
        string val1 = val.top(); val.pop();
        val.push(solve(val1, val2, ch));
    }

    cout << val.top();
}