#include<iostream>
#include<vector>
using namespace std;
//setting a swapping function to swap the values of two variables
int swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
//function to sort the array of 0s and 1s using two pointers
void sort01m2(vector<int>&v){
    int i=0; //left pointer
    int j=v.size()-1; //right pointer
    while(i<j){ //while left pointer is less than right pointer
        if(v[i]<0){ //if left pointer points to 0, move it to the right
            i++;
        }
        else if(v[j]>0){ //if right pointer points to 1, move it to the left
            j--;
        }
        else{ //if left pointer points to 1 and right pointer points to 0, swap them
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
}
//main function to test the sorting function
int main(){
    vector<int> a; //creating a vector of integers
    a.push_back(-3); //adding elements to the vector
    a.push_back(2);
    a.push_back(-4);
    a.push_back(5);
    a.push_back(6);
    a.push_back(-7);
    a.push_back(-10);
    a.push_back(91);
    cout<<"Given array:";
    for(int i=0;i<a.size();i++){ //printing the original array
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sort01m2(a); //sorting the array using the sorting function
    cout<<"Updated & sorted array:";
     //printing the sorted array
    for(int i=0;i<a.size();i++){ //printing the sorted array
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
