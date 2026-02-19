#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    for(int i=0;i<a.size()-1;i++){
        cout<<a[i]<<" ";

    }
  sort(a.begin(),a.end());
    cout<<endl;
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    a[a.size()-1]++;
    cout<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
        return 0;

}