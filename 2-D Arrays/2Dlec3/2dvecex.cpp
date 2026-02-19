#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v;
    vector<int>v1;
    // v1.push_back(1);
    // v1.push_back(2);
    // v1.push_back(3);

    //user input for first vector
    int n1;
    cout << "Enter number of elements for first vector: ";
    cin >> n1;
    for(int i = 0; i < n1; i++) {
        int element;
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        v1.push_back(element);
    }
    vector<int>v2;
    v2.push_back(4);
    v2.push_back(5);
    vector<int>v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}