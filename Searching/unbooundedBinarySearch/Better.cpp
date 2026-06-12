#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> a,int st , int e, int target){
    int start = st ;
    int end = e;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(a[mid]==target){
            return mid;
        }else if(a[mid]>target){
            end = mid-1; 
        }else{
            start = mid+1;
        }
    }
    return -1;
}

int better(vector<int> arr , int target){
    if(arr[0]==target)return 0;
    int i = 1;
    while(true){
        if(arr[i]==target)return i;
        if(arr[i]>target){
            return binarySearch(arr,i/2+1,i-1,target) ;
        }
        i = i*2;
    }
    return binarySearch(arr,i/2+1,i-1,target);
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    cout<<better(arr,19);
}
