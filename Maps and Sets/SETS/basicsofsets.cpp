#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1);
    int target=4;
    
    // use for each
    for(int x : s){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<s.size();
    cout<<endl;

    if(s.find(target)!=s.end()){ //target exists
         //s.find() check karta hai saare elements ko aur agar nahi mila target toh end element return kar deta hai else mil jayega toh true milega
         cout<<"EXISTS"<<" ";
    }
    else cout<<"DOES NOT EXIST"<<" ";
}