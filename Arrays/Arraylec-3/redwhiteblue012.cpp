#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>&v){
    int noz=0;
    int noo=0;
    int notw=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            noz++;
        }
        else if(v[i]==1){
            noo++;
        }
        else{
            notw++;
        }
    }
    for(int i=0;i<v.size();i++){
       if(i<noz){
            v[i]=0;
        }
        else if(i<noz+noo){
            v[i]=1;
        }
        else{v[i]=2;}
};
}
int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(0);
    a.push_back(2);
    a.push_back(1);
    a.push_back(2);
    a.push_back(0);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sort01(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}