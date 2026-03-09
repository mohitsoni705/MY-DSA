// Array at index

#include<iostream>

using namespace std;
int main(){
    int arr[] = {10 , 20 , 30 , 40 , 50 };
    int index = 3;
    int value = 99;
    int size = 5;
    for(int i = size; i>index; i-- ){
        arr[i]=arr[i-1];
    }
    arr[index]= value;
    size++;
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<endl;
    }
}