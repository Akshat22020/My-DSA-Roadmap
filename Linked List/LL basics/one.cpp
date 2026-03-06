#include<iostream>
using namespace std;
class Student {
    public:
    string name ;
    int rno;
    float marks;

    Student(string name , int rno , float marks){
        this->name = name;
        this->rno=rno;
        this->marks=marks;
    }
};
int main(){
    Student s("Akshat",8,92.3);
    Student *ptr=&s;   // ptr "s- object " ke address ko store karta hai

// ptr s object ka address store karta hai
// *ptr us address par maujood object (s) ko access karta hai
    cout<<s.name<<endl;
    ptr->name="Riya";  //matlab , ptr jahaan point kar raha hai waha ke value ko change kar do
    cout<<s.name;

}