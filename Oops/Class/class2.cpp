#include<iostream>
using namespace std;

class Player{
    private:
    int health;
    int age;
    int score;
    bool alive;

    public:

 
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    bool checkalive(){
        return alive;
    }

    int setScore(int score){
        this->score=score;
    }
    int setHealth(int health){
        this->health=health;
    }
    int setage(int age){
        this->age=age;
    }
    int setalive(int alive){
        this->alive=alive;
    }
};
int addScore(Player a, Player b){
    return a.getScore()+b.getScore();
}

Player getMaxScorePlayer(Player a , Player b){
    if(a.getScore()>b.getScore()){
        return a ;
    }
    else return b;
}
int main(){
    Player player1;
    player1.setage(31);
    player1.setHealth(100);
    player1.setalive(false);
    player1.setScore(23432);
    cout<<"_____Player1 info_____"<<endl;
    cout<<"age: "<<player1.getAge()<<endl;
    cout<<"Health: "<<player1.getHealth()<<endl;
    cout<<"Score: "<<player1.getScore()<<endl;
    cout<<"Player is alive if 1: "<<player1.checkalive()<<endl;

    Player player2;
    player2.setage(44);
    player2.setHealth(111);
    player2.setalive(true);
    player2.setScore(23443);
    cout<<"_____Player2 info_____"<<endl;
    cout<<"age: "<<player2.getAge()<<endl;
    cout<<"Health: "<<player2.getHealth()<<endl;
    cout<<"Score: "<<player2.getScore()<<endl;
    cout<<"Player is alive if 1:"<<player2.checkalive()<<endl;


    cout<<"The scores of player 1 and player 2 are-->"<<addScore(player1,player2)<<endl;

    Player winnerplayer=getMaxScorePlayer( player1,player2);
    cout<<winnerplayer.getScore();
    
}
