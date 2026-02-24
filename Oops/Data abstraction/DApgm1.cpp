#include<iostream>
class Player{
    public: //abstraction
    int score;
    int health;
};
using namespace std;
int main(){
    Player akshat;
    akshat.score=1222;
    akshat.health=45;

    Player akshit;
    akshit.score=1232;
    akshit.health=23;

    if(akshat.score>akshit.score){
        cout<<"Akshat's score is greater than akshit's";
    }
    else cout<<"Akshit won";
}