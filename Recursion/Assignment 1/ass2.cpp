#include<iostream>
using namespace std;
int sumOddNumbers(int a, int b) {

    if (a > b) {

        return 0;

    }

    if (a % 2 != 0) {

        return a + sumOddNumbers(a + 1, b);

    } else {

        return sumOddNumbers(a + 1, b);

    }

}
int main(){
    int a,b;
    cout<<"Enter the range to sum from a to b "<<endl;
    cin>>a>>b;
    int result = sumOddNumbers(a,b);
    cout<<"The sum from "<<a<<" to "<<b<<" is "<<result<<endl;
    return 0;
}