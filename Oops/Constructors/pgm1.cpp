#include<iostream>
using namespace std;
class Bike{
    public:
    int tyreSize;
    int engine;
    Bike(int tyreSize , int engine){
        this->tyreSize=tyreSize;
        this->engine=engine;
        
    }

};
int main(){
    //destructor yaha call hoga 
    Bike tvs(12,200); //object creation //constructor call ho jaawe

    Bike royalenf(15,800);

    cout<<"Tyresize and engine tvs : "<<tvs.tyreSize<<" "<<tvs.engine<<endl;

    cout<<"Tyresize and engine royalenf:"<<royalenf.tyreSize<<" "<<royalenf.engine<<endl; 
} 