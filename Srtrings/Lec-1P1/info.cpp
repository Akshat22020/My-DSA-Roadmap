//strings are basically character arrays
#include<iostream>
#include<string>
using namespace std;
int main(){
char arr[5]="abcd"; //converting string to character array
// Note: The size of the array is 5, but only 4 characters are initialized, leaving the last character as null terminator '\0'. 
for(int i=0;i<5;i++){
    cout<<arr[i]<<" "<<endl;
}
} 