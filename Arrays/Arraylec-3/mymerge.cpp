#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> one={1, 4, 5, 8};
    vector<int> two={2, 3, 6, 7, 10};
    int i=0, j=0, k=0;
    int size_one=one.size();
    int size_two=two.size();
    vector<int> three(size_one+size_two);
    while(i<size_one && j<size_two){
        if(one[i]<two[j]){
            three[k++]=one[i++];
        }else{
            three[k++]=two[j++];
        }
    }
    while(i<size_one){
        three[k++]=one[i++];
    }

    while(j<size_two){
        three[k++]=two[j++];
    }
    cout<<"Merged array: ";
    for(int val:three){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}