#include<iostream>
#include<vector>

using namespace std;

void bubbleSort(vector<int> &arr){
    for(int i = 0 ; i<arr.size()-1; i++){
        bool sawaped = false;
        for(int j = 0; j<arr.size()-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                sawaped=true;
            }   
        }
        if(sawaped == false){
            break;
        }
    }
}
int main(){ 
    //loop n - 1 
    //loop n - i - 1
    //if arr[j] > arr[j + 1] swap
    //swapped false 
    //break)
    vector<int> arr = {2,3,1,5,4};
    bubbleSort(arr);
    for(int i : arr){
        cout<<i<<" ";
    }
}