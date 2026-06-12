#include<iostream>
#include<vector>

using namespace std;

int count(vector<int> arr , int n){
    // int index = -1;
    for(int i = 0; i<n; i++){
        if(arr[i]==1){
            return n-i;
        }
    }
    return 0;
}

int main(){
    vector<int> arr = {0,0,0,0};
    cout<<count(arr,arr.size());
}