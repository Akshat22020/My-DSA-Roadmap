#include<iostream>
using namespace std;
class A{
    public:
    virtual void show()=0;
    virtual void add(int a,int b)=0;
};
class B : public A{
    public:
    void show(){
        cout<<"Mai A ka show tha but mai khaali tha toh mujhe B ne bulaya";

    }
    void add(int a , int b){
        cout<<a+b;
    }
};

int main(){
    B b;
    b.add(3,4);
    b.show();
}