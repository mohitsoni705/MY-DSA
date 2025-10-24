#include<iostream>
#include<vector>

using namespace std;
int BinarySearch(vector<int> &arr, int target){
    int start = 0 ;
    int end = arr.size() - 1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid-1]==target){
            return mid-1;
        }else if(arr[mid+1]==target){
            return mid+1;
        }else if (arr[mid]>target){
            end = mid - 2;
        }else{
            start = mid + 2;
        }
    }
    return -1;
}
int main(){
    vector<int> num = {10,3,40,20,50,80,70};
    cout<<BinarySearch(num, 3);
}