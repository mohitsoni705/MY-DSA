//Reversing an array
#include<iostream>

using namespace std;

void reverseArray(int arr[] , int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(start , end);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    reverseArray(arr, n);
    for(int i = 0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
}