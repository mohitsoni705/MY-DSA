#include<iostream>

using namespace std;
int countEvenOrOdd(int arr[] , int n){
    int count = 1;
    for(int i = 0; i<n; i++){
        int curr = 1;
        for(int j = i+1; j<n-1; j++){
            if((arr[j] % 2 == 0 && arr[j-1]%2 !=0) || (arr[j] % 2 != 0 && arr[j-1]%2 ==0)){
                curr++;
            }else{
                break;
            }
        }
        count = max(count,curr);
    }
    return count;
}
int main(){
    int arr[] = {5,10,20,6,3,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<countEvenOrOdd(arr,n);
}