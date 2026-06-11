#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> a,int target , int start , int end){
    if(start>end){
        return -1;
    }
    int mid = start+(end - start)/2;
    if(a[mid]==target){
        return mid;
    }else if(a[mid]>target){
        return binarySearch(a,target,start,mid-1);
    }else{
        return binarySearch(a,target,mid+1,end);
    }
}

int main(){
    // vector<int> a = {};
    vector<int> a = {1,2,3,4,5,6,7,8,9};
    cout<<binarySearch(a,2,0,a.size()-1);
}