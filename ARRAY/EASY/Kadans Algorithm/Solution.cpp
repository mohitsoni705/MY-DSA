#include<iostream>

using namespace std;

int kadans(int arr[] , int n){
    int start = 0;
    int maxSum = INT_MIN;
    for(int i = 0; i<n; i++){
        start = start + arr[i];
        if(start>maxSum){
            maxSum = start;
        }
        if(start<0){
            start = 0;
        }
    }
    return maxSum;
}
int main(){
    int arr[]= {2,3,-8,5,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    kadans(arr,n);
}