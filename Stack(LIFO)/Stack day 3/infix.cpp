#include<iostream>
#include<stack>
using namespace std;

int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}

int solve(int val1 , int val2 , char ch){
    if(ch=='+') return val1+val2;
    if(ch=='-') return val1-val2;
    if(ch=='*') return val1*val2;
    else return val1/val2;
}

int main(){
    string s="2+6*4/8-3";
    stack<int> val;
    stack<char> op;

    for(int i=0;i<s.length();i++){
        if(s[i] >= '0' && s[i] <= '9'){
            val.push(s[i] - '0');
        }
        else{
            if(op.empty()){
                op.push(s[i]);
            }
            else if(priority(s[i]) > priority(op.top())){
                op.push(s[i]);
            }
            else{
                while(!op.empty() && priority(s[i]) <= priority(op.top())){
                    char ch = op.top(); op.pop();
                    int val2 = val.top(); val.pop();
                    int val1 = val.top(); val.pop();

                    val.push(solve(val1, val2, ch));
                }
                op.push(s[i]);
            }
        }
    }

    // FINAL EVALUATION (IMPORTANT)
    while(!op.empty()){
        char ch = op.top(); op.pop();
        int val2 = val.top(); val.pop();
        int val1 = val.top(); val.pop();

        val.push(solve(val1, val2, ch));
    }

    cout << val.top();
}