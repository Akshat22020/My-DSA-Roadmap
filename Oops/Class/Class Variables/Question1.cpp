#include<iostream>
using namespace std;
class book{
    public:
    char name;
    int price;
    int number_of_pages;
     int countBooks(int p){
        // int count=0;
        if(price<p){
            return 1;
        }
        else return 0;
    }
    bool isBookPresent(char title){
        if(title==name){
              return true;
        }
        else return false; 
    }
   
};
int main(){
    book HarryPotter;
    HarryPotter.name='H';
    HarryPotter.price=1000;
    HarryPotter.number_of_pages=500;

    cout<<HarryPotter.isBookPresent('H');
    
}