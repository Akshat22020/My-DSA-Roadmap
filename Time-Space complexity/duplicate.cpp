#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>check(8,0);
    vector<int>arr(8);
    arr.push_back(6);
    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(3);   
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(9);
int n = 6; // expected range
int expected_sum = n*(n+1)/2;
int actual_sum = 0;
for(int val : arr) actual_sum += val;
int duplicate = actual_sum - expected_sum;

return 0;

}