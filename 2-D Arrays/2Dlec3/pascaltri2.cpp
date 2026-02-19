#include<iostream>
#include<vector>
using namespace std;

int main(){
    int numrows = 5;
    int rowindex;
    cout << "Enter the row number you want to print: ";
    cin >> rowindex;

    if(rowindex < 0 || rowindex >= numrows) {
        cout << "Invalid row number. Please enter a number between 0 and " << numrows - 1 << "." << endl;
        return 1;
    }

    vector<vector<int>> v;

    for(int i = 0; i < numrows; i++){
        vector<int> a(i + 1);
        v.push_back(a);
    }

    for(int i = 0; i < numrows; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i){
                v[i][j] = 1;
            } else {
                v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
    }

    // Optional: Display entire Pascal's Triangle
    cout << "\nFull Pascal's Triangle:\n";
    for(int i = 0; i < numrows; i++){
        for(int j = 0; j <= i; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    // ✅ Print only the desired row
    cout << "\nRow " << rowindex << " of Pascal's Triangle: ";
    for(int j = 0; j <= rowindex; j++){
        cout << v[rowindex][j] << " ";
    }
    cout << endl;

    return 0;
}
