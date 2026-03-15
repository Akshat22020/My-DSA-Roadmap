#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"A ka constructor call hua \n";
    }
};
class B : virtual A{
    public:
   B(){
    cout<<"B ka constructor call hua \n";
   }
};
class C : virtual A{
    public:
    C(){
        cout<<"C ka constructor call hua\n";
    }
};

class D : public B , public C{
    public:
    D(){
        cout<<"D ka constructor call hua\n";
    }
};
int main(){
    D d;
}
