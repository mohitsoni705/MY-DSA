#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr , int start , int end , int target){
    if(start>end){
        return -1;
    }
    int mid = start + (end - start)/2;
    if(arr[mid]==target){
        return mid;
    }else if(target<arr[mid]){
        return binarySearch(arr, start, mid-1, target);
    }else{
        return binarySearch(arr, mid+1, end, target);
    }
    
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int start = 0;
    int end = arr.size()-1;
    int target = 7;
    cout << binarySearch(arr, start, end, target) << endl;
}
