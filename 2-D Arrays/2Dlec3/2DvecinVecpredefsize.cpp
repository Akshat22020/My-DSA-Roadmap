#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v(3, vector<int>(4,6)); // Predefined size of 3 rows and 4 columns
    // Initializing the 2D vector with some values   //(4,6) means 4 columns and the values of all the elements will be set predefinetely to 6


    // Displaying the 2D vector
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}