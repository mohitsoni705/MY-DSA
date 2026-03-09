#include<iostream>

using  namespace std;

int MaximumDiff(int arr[] , int n){
    int res = arr[1]-arr[0];
    for(int i = 0 ; i<n; i++){
        for(int j = 1 ; j<n-1; j++){
            res = max(res,arr[j]-arr[i]);
        }
    }
    return res;
}
int main(){
    int arr[] = {2,3,10,6,4,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<MaximumDiff(arr,n);

}