#include<iostream>
#include<vector>

using namespace std;

int main(){
    int arr[] = {0,0,8,5,0,10,0,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    for(int i = 0 ; i<n; i++){
        if(arr[i]!=0){
            swap(arr[start],arr[i]);
            start++;
        }
    }
    for(auto a : arr){
        cout<<a<<" ";
    }
}