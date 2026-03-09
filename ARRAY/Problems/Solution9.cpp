// Immediate Greater

//COunt smaller then x
#include<iostream>

using namespace std;

int countSmallerX(int arr[] , int x , int size){
    int prevGreater = -1;
    for(int i = 0 ; i<size ; i++){
        if(arr[i]<x && arr[i]>prevGreater){
                prevGreater = arr[i];
        }
    }
    return prevGreater;
}
int main(){
 int arr[] ={10 , 20 , 30 , 40 , 50 };
    int x = 20;
    int size = 5;
    cout<<countSmallerX(arr , x  , size);

}