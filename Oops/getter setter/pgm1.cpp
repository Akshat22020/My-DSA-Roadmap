#include<iostream>
using namespace std;
class Player{
    private:
    int score;
    int health;
    
    public:
    //setter
    void setScore(int s){
        score=s;
    }
    void setHealth(int h){
        health=h;
    }

    //getter
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};
int main(){
    Player akshat;
    akshat.setScore(10);
    cout<<akshat.getScore();
}