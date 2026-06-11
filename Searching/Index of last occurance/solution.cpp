#include<iostream>
#include<vector>

using namespace std;
int index(vector<int> arr , int target){
    int low  = 0 ;
    int high = arr.size()-1;
    int index = -1;
    while(low<=high){
        int mid = low+high/2;
        if(arr[mid]==target){
            index = mid;
            low = mid + 1;
        }else if(arr[mid]>target){
            high = mid - 1;
        }else{
            low = mid + 1 ;
        }
    }
    return index;
}
int main(){
    vector<int> a = {1,1,2,2,2,3,4,5,6,7,8,9};
    int target = 2;
    cout<<index(a,target);
}
