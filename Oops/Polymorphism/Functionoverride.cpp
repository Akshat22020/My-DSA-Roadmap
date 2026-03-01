#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"Mai A ka show hoon! \n";
    }
};
class B : public A{
    public:
    void show(){cout<<"Watashiwa B san no Show function desu\n";}
};
int main(){
    B b;
    b.A::show(); //using this :: access spec. can access A's show function even though overridden
    b.show();

}