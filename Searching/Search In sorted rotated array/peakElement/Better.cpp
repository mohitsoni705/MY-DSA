#include<iostream>
#include<vector>

using  namespace std;

int peak(vector<int> arr){
    int low = 0 ;
    int high = arr.size()-1;
    while(low<high){
        int mid = low+(high  - low)/2;
        if(arr[mid]<arr[mid+1]){
            low = mid+1;
        }else{
            high  = mid;
        }
    }
    return arr[low];
}
int main(){
    vector<int> arr = {1,2,3,4,5,4,7,8,9};
    cout<<peak(arr);
}