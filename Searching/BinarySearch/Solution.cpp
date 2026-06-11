#include<iostream>
#include<vector>


using namespace std;

int binarySearch(vector<int> a,int target){
    int start = 0 ;
    int end = a.size()-1;
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
int main(){
    vector<int> a = {1,2,3,4,5,6,7,8,9};
    cout<<binarySearch(a,8);
}