#include<iostream>
#include<vector>


using namespace std;

int firstOccurence(vector<int> a , int n , int k){
    int start = 0;
    int end = n;
    int index = -1;
    while(start<=end){
        int mid = start+(end - start)/2;
        if(a[mid]==k){
            index = mid;
            end = mid -1;
        }else if(a[mid]>k){
            end = mid - 1 ;
        }else{
            start = mid + 1;
        }
    }
    return index;
}
int lastOccurence(vector<int> a ,int st, int n , int k){
    int start = st;
    int end = n;
    int index = -1;
    while(start<=end){
        int mid = start+(end - start)/2;
        if(a[mid]==k){
            index = mid;
            start = mid + 1;
        }else if(a[mid]>k){
            end = mid - 1 ;
        }else{
            start = mid + 1;
        }
    }
    return index;
}
int count(vector<int> a , int k){
    int first = firstOccurence(a,a.size()-1,k);
    if(first == -1){
        return 0;
    }
    return (lastOccurence(a,first,a.size()-1,k)-first + 1);
}
int main(){
    vector<int> a = {1,1,1,1,2,3,4,5,6,7,7,8,9};
    cout<<count(a,1);
}