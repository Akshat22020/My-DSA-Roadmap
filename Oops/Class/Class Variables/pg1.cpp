#include<iostream>
using namespace std;
class Player{
    public:
    int score;
    int health;
    void showHealth(){
        cout<<"The health is:   "<<health;
    }
};

int main(){
    int a=10;
    Player akshat; //object akshat
    akshat.score=93;
    akshat.health=100;
    akshat.showHealth();
}