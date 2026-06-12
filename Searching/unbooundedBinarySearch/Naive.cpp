#include<iostream>
#include<vector>

using namespace std;

int naive(vector<int> arr , int target){
    if(arr[0]==target)return 0;
    int i = 1;
    while(true){
        if(arr[i]==target)return i;
        if(arr[i]>target) return -1;
        i++;
    }
    return -1;
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    cout<<naive(arr,7);
}