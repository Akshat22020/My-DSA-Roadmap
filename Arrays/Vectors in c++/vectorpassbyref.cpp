#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>&a){// using the ampercent operator "&" we are directly referrring the value of v to a such that no copying takes place , instead the  values in the original vector is changed after the usage of change(parameter)....
    a[0]=100;

   cout<<endl; 

}
int main(){
    vector<int>v;
    v.push_back(8);
    v.push_back(9);
    v.push_back(2);
    v.push_back(1);
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
}
cout<<endl;
change(v);
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
}

}