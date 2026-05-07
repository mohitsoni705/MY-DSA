#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr1 = {10,20,35}; 
    vector<int> arr2 = {5,50,50};

    int i = 0;
    int j = 0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<=arr2[j]){
            cout<<arr1[i];
            i++;
        }else{
            cout<<arr2[j];
            j++;
        }
    } 
}