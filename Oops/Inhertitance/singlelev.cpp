#include<iostream>
using namespace std;
class Vehicle{ //parent class
    public:
    int tyresize;
    int engineSize; 
    int lights;
    string companyName;
};
class Car: public Vehicle{ //baccha 1
    public:
    int steeringSize;

};

class Bike : public Vehicle{ //baccha 2
    public:
    int handleSize;
};
int main(){
    Bike tvs;
    tvs.engineSize=12;
    tvs.tyresize=10;
    tvs.handleSize=12;
    cout<<tvs.engineSize<<endl;
}