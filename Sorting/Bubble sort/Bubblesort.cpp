#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(5);
    v1.push_back(3);
    v1.push_back(8);
    v1.push_back(4);
    v1.push_back(2);
    int size=v1.size();
    cout<<"Array before sorting:";
    for(int i=0;i<size;i++){
        cout<<v1[i]<<" ";
    }
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(v1[j]>v1[j+1]){
                swap(v1[j],v1[j+1]);
            }
        }
    }
    cout<<"\nArray after sorting:";
    for(int i=0;i<size;i++){
        cout<<v1[i]<<" ";
    }

}
