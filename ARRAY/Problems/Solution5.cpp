// Delete and shift

#include<iostream>

using namespace std;

void DeleteAndShift(int arr[] ,int index , int size){
    for(int i = index; i<size-1 ; i++){
        arr[i] = arr[i + 1];
    }
        arr[size-1] = 0;
}
int main(){
    int arr[] ={10 , 20 , 30 , 40 , 50 };
    int index = 0;
    int size = 5;
    DeleteAndShift(arr , index , size);

}