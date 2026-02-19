#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    bool flag=false;
    int idxx=-1;
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            flag=true;
            idxx=i;
            break;
        }
    }
    if(flag) cout<<"Hell yeah ! , it can be partitioned at idx"<<" "<<idxx;
    else cout<<"nah bro , TAL";
    

}