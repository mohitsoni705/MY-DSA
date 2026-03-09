#include<iostream>
#include<vector>

using namespace std;

void removeDuplicate(int arr[], int n){
    int res = 1;
    for(int i = 0 ; i<n; i++){
        if(arr[i]!=arr[res]){
            arr[res] = arr[i];
            res++;
        }
    }

}
int main(){
  int arr[] ={1,2,2,3,3,4,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  removeDuplicate(arr, n);  
  for(int i = 0 ; i<n; i++){
    cout<<arr[i];
  }
} 