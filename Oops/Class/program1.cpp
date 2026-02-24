#include<iostream>
class Player{
    public:
    int score;
    int health;
};
using namespace std;
int main(){
    int a=10;
    Player akshat; //object akshat
    akshat.score=93;
    akshat.health=100;
    cout<<akshat.health;
}