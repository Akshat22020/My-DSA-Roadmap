#include<iostream>
using namespace std;
class Student {
    public:
    string name ;
    int rno;
    float marks;

    Student(string name , int rno){
        this->name = name;
        this->rno=rno;
        // this->marks=marks;
    }
};
void change(Student *s){
    s->name="Riya";
}
int main(){
    Student *m = new Student("Akshat",8);
    m->marks=92.8;
    cout<<m->name<<endl;
   change(m);
    cout<<m->name;
    cout<<endl<<m->marks;

}