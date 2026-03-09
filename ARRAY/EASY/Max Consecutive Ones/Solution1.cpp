#include<iostream>
#include<vector>

using namespace std;

int maxCons(int arr[] , int n){
    int count1 = 0;
    int count2 = 0;
    for(int i = 0 ; i<n; i++){
        if(arr[i]!=0){
            count2++;
        }else{
            count1 = max(count1 , count2);
            count2 = 0;
        }
    }
    return max(count1 , count2);
}

int main(){
    int arr[] = {1,0,1,1,1,1,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxCons(arr,n);
}