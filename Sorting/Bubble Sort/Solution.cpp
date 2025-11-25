#include<iostream>
#include<vector>

using namespace std;

void bubbleSort(vector<int> &arr){
    int n = arr.size();
    for(int i = 0 ; i < n - 1 ; i++){
        bool swapped = false ;
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true ;
        }
    }
    if (!swapped)return ;  
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