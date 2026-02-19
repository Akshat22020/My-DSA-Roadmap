//1 Write a program to calculate the sum of the digits of a given positive integer using recursion
#include <iostream>
using namespace std;
int sumofDigits(int n ){
    if (n==0) return 0;
    return (n%10)+sumofDigits(n/10);

}
int main(){
    cout<<sumofDigits(12345);
    return 0;
}