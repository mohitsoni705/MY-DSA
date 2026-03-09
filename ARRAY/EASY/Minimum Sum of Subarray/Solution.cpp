#include<iostream>

using namespace std;

int maximumSum(int arr[] , int n){
    int currSum = arr[0];
    int maxSum = arr[0];

    for(int i = 0; i<n; i++){
        currSum = max(currSum , currSum + arr[i]);
        maxSum = max(currSum,maxSum);
    }
    return maxSum;
}

int main(){
    int arr[] = {2,3,-8,7,-1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maximumSum(arr,n);
}