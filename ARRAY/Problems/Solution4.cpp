//updae element

#include<iostream>

using namespace std;

void UpdateElementAtIndex(int arr[] , int index, int size, int val){
    if(index>=size || index<0){
        return;
    }else{
        arr[index]= val;
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int index = 0;
    int val = 10;
    UpdateElementAtIndex(arr, index , size , val);
}