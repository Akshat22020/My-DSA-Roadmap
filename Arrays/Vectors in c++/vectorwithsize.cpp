#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v(5);
cout<<"Size and capacity of the predefined vector:"<<endl;
cout<<v.size()<<endl<<v.capacity()<<endl;
vector<int>v1(5,10);//vector which contains 5 elements and each element has value 10
cout<<"The values of the vector v2:"<<endl;
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<"  ";
}

}