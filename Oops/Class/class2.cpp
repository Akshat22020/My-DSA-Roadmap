#include<iostream>
using namespace std;
class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};

class Player{
    private:
    class Helmet{
        int hp;
        int level;
    public:
    void setHp(int hp){
        this->hp=hp;
    }
    void setLevel(int level){
        this->level=level;
    }
    int getHp(){
        return hp;
    }
    int getlevel(){
        return level;
    }

    };
    private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun; //Gun datatype ka object gun ban gaya hai bhai ji 
    Helmet helmet; //  created helmet object for Helmet nested class

    public:
// *NOTE* GUN CLASS CAN ONLY BE ACCESSED BY THEPLAYER CLASS AND NONE OTHER
 
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
    Gun getGun(){  //created getter for gun object
        return gun;
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
    void  setGun(Gun gun){
        this->gun=gun;
    }
    void setHelmet(int level){
        Helmet *helmet = new Helmet;
        helmet->setLevel(level);
        int health=0;
        if(level==1) health=25;
        else if(level==2) health=50;
        else if (level==3) health = 100;


        helmet->setHp(1);
        this->helmet=*helmet;

    }
    Helmet getHelmer(){
        return helmet;
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
//_________________ALLOCATION OF MEMBERS AND OBJECTSS______________

    Player player1;//static allocation
    Player player2;//static allocation 
    Player *player3=new Player; //allocates memory for player3 at runtime
    //dynamic allocation
    // Player player3object=*player3;

//SETTING VALUES FOR ALL THE CLASS MEMBERS AND OBJECTS
    Gun akm;
    akm.ammo=100;
    akm.damage=50;
    akm.scope=2;


    player1.setage(31);
    player1.setHealth(100);
    player1.setalive(false);
    player1.setScore(23432);
    player1.setGun(akm);
    player1.setHelmet(2);
 
    Gun gun_player1 = player1.getGun();
    cout<<gun_player1.ammo<<endl;
    cout<<gun_player1.damage<<endl;
    cout<<gun_player1.scope<<endl;


    Gun awm;
    akm.ammo=134;
    akm.damage=100;
    akm.scope=8;

    
    player2.setage(44);
    player2.setHealth(111);
    player2.setalive(true);
    player2.setScore(23443);
    player2.setGun(awm);
    player2.setHelmet(2);

    Gun gun_player2 = player2.getGun();
    cout<<gun_player2.ammo<<endl;
    cout<<gun_player2.damage<<endl;
    cout<<gun_player2.scope<<endl;

  
    


   


    // (*player3)->setScore(40);
    (*player3).setage(19);
    player3->setScore(1323);

// PRINTING OUT THE VALUES OF PLAYERS

     cout<<"_____Player1 info_____"<<endl;
    cout<<"age: "<<player1.getAge()<<endl;
    cout<<"Health: "<<player1.getHealth()<<endl;
    cout<<"Score: "<<player1.getScore()<<endl;
    cout<<"Player is alive if 1: "<<player1.checkalive()<<endl;

      cout<<"_____Player2 info_____"<<endl;
    cout<<"age: "<<player2.getAge()<<endl;
    cout<<"Health: "<<player2.getHealth()<<endl;
    cout<<"Score: "<<player2.getScore()<<endl;
    cout<<"Player is alive if 1:"<<player2.checkalive()<<endl;


    cout<<endl<<"Player 3's age : "<<(*player3).getAge();
    cout<<endl<<"Player3's score : "<<player3->getScore();
    // cout<<*player3->getScore();


     cout<<"The scores of player 1 and player 2 are-->"<<addScore(player1,player2)<<endl;

    Player winnerplayer=getMaxScorePlayer( player1,player2);
    cout<<winnerplayer.getScore();

     
    
}
