#include<iostream>

using namespace std;

int main(){
    int arr[] ={1,2,3,4,5};
    int del = 4;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i<n ; i++){
        if(arr[i] == del){
            for(int j = i; j<n-1; j++){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    arr[n-1]=0;
    for(int i = 0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
}