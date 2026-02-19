#include<iostream>
using namespace std;
//down or right 
int maze(int sr , int sc , int er , int ec){
    if(sr>er || sc>ec){
        return 0;
    } 
    if(sr==er && sc==ec){
        return 1;
    }
   int rightways= maze(sr,sc+1,er,ec);
   int downways=maze(sr+1,sc,er,ec);
   return rightways+downways;     
}
void printpath(int sr , int sc , int er , int ec , string path){
    if(sr>er || sc>ec){
        return ;
    } 
    if(sr==er && sc==ec){
        cout<<path<<endl;
        return ;
    }
   printpath(sr,sc+1,er,ec,path+'R');
   printpath(sr+1,sc,er,ec,path+'D');  
}
int main(){
    cout<<maze(0,0,2,2)<<endl;
    printpath(0,0,2,2,"");
    return 0;
}