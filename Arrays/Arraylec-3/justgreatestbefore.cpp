//previous greatest element in an array
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
 for(int i = 0; i < 10; i++){
        a.push_back(i); // fill the vector with numbers 1 to 10
    }
    int n = a.size();
    int x = 3; // element to find the previous greatest element for
    int prev_greatest = -1; // initialize to -1 if no previous greatest exists
    vector<int>b;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[j] > a[i]){
                b.push_back(a[j]);
            }
        
        }
        sort(b.begin(), b.end(), greater<int>()); // sort in descending order
        if(!b.empty()){
            prev_greatest = b[0]; // the first element is the greatest
        }
        else{
            prev_greatest = -1; // no previous greatest found
        }
      
    }
    cout << "Previous greatest element for " << x << " is: " << prev_greatest << endl;
    cout << "Sorted array in descending order: ";
    for(int i = 0; i < n; i++){
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}