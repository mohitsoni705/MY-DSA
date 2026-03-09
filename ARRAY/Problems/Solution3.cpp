//Get element at index

#include<iostream>

using namespace std;

int getIndexAt(int arr[] , int index, int size){
    if(index>=size || index<0){
        return -1;
    }else{
        return arr[index];
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int index = 4;
    getIndexAt(arr, index , size);
}