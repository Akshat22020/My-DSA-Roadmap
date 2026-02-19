#include<iostream>
#include<string>
using namespace std;
int main(){
    char str[]={'a','b','\0','c','d','e','f'}; 
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" "; 
  
    }
//on using /0 , we can only print till the null character, so it will not print c,d,e,f
    cout<<str; // Output: ab
    // The output will be "ab" because the loop stops at the null character '\0'.
    // The string is terminated at the null character, so it does not print 'c', 'd', 'e', 'f'.
    return 0;
}