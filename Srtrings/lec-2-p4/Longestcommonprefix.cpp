#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<string>v{"flower","flow","flight"};
    sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    for(int i=0;i<v[0].size();i++){
        for(int j=v.size()-1;j>=0;j--){
            if(v[0][i]!=v[j][i]){
                cout<<v[0].substr(0,i)<<endl;
                return 0;
            }
        }
    }

}
