//rotate Array
#include<iostream>

using namespace std;

void reverse(int arr[] , int start, int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void rotateArray(int arr[] , int n , int d){
    //reversing first d element
    reverse(arr,0,d);
    //reverseing rest
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main(){
    int arr[] ={1,2,3,4,5};
    int n = 5;
    int d = 2;
    rotateArray(arr , n , d);
    for(int i = 0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
}