#include<iostream>
#include<vector>

using namespace std;

int countOccurance(vector<int> arr , int n){
    int start = 0;
    int end = n-1;

    int index = -1;

    while(start<=end){
        int mid = start+(end - start)/2;
        if(arr[mid]==1){
            index = mid;
            end = mid - 1;
        }else{
            end = mid - 1;
        }
    }
    if(index == -1){
        return 0;
    }
    return (n-index);
}
int main(){
    vector<int> arr = {0,0,0,0,1,1,1,1,1};
    cout<<countOccurance(arr , arr.size());
}