#include<iostream>
using namespace std;
class A{
    private: 
    int a_ka_private; //can't be accessed or inherited
    protected:
    int a_ka_protected;//can't be accessed but inherited
    public:
    int a_ka_public;//can be accessed and inherited
};
class B:public A{
      public:
      int b_ka_public;

      void show(){
       
      }
};
int main(){
    B b;
    b.a_ka_public=10;
    b.b_ka_public=90;
    
}