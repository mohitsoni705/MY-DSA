#include<iostream>
using namespace std;

void function(int &arr , int n ){
    for(int i = 0; i<n ; i++){
        for(int j = i+1 ; j<n-1; j++){
            if(arr[j]>arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
}
void median(){

}
void mean(){

}
void mode(){

}
int main(){
    int arr[]={1,2,4,28,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<function( arr, n);

}