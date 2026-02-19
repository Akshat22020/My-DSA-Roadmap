#include<iostream>
#include<vector>
using namespace std;
void subArray(vector<int>v,int arr[] , int n, int idx) {
  if(idx == n) {
   for(int i =0; i<v.size(); i++){
    cout<<v[i];
   }
   cout<< endl;
   return;
  }
  subArray(v ,arr ,n, idx+1);//left calls , hamesha call hota rahega
  if(v.size() ==0 || arr[idx-1]==v[v.size()-1]){ //agar vector empty hai ya last element same hai array se to add kar do
    v.push_back(arr[idx]);
    subArray(v ,arr ,n, idx+1);
  }
}
int main(){
    int arr[]={1,2,3,4}; 
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    subArray(v , arr , size , 0);
    return 0;
}