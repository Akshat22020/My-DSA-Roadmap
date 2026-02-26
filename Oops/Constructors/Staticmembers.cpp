#include<iostream>
using namespace std;
void print(){
    int a=12;
    static int b=10;
    cout<<a<<" "<<b<<endl;
    a++;
    b++;
}
int main(){
   
    print();
    print();
    print();
} 