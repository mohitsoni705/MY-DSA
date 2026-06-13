#include<iostream>
#include<vector>

using namespace std;


int search(vector<int> arr , int target){
    int low = 0;
    int high = arr.size() - 1;
    while(low<=high){
        int mid  = low+(high - low)/2;
        if(arr[mid] == target){
            return mid;
        }else if(arr[low]<arr[mid]){
            if(target>=arr[low] && target<arr[mid]){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }else{
            if(target<=arr[high] && target>arr[mid]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {10,20,30,40,50,60,5,8};
    int target = 8;
    cout<<search(arr , target);
}