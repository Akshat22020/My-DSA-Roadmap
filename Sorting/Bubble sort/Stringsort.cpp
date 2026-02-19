#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s ="AZYZXBYDXJK";
    int n = s.length();
    string str ="";
    for (int i =0 ; i<s.size(); i++){
            if (s[i]>='X'){
                str.push_back(s[i]);

            }
        }
        cout<<str;
    int k=str.length();

    for(int i=0;i<k-1;i++){
        for(int j=0;j<k-i-1;j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
            }
        }
    }
        cout<<"\nSorted string: "<<str;

    reverse(str.begin(),str.end());
    cout<<"\nSorted string: "<<str;
}
