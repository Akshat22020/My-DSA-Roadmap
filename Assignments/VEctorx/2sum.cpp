//Leetcode1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int s;
    cout<<"Enter the number to search the twosum";
    cin>>s;
    int n;
    cout<<"Enter the size:";
    cin>>n;
vector<int>v;//dont you dare mention the size cause youre assigning the size later on
cout<<"Enter the elements of the array:";
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    v.push_back(k);
}
for(int i = 0; i < v.size() - 1; i++) { // the code goes upto the socond last number in array
    for(int j = i + 1; j < v.size(); j++) {// the code goes upto the lst number in array
        if(v[i]+v[j]==s){
            cout<<"("<<i<<","<<j<<")";
        }
    }
}
}