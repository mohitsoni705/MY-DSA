#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> a, int target){
   int start = 0 ;
   int result = -1;
   int end = a.size() - 1;
   while(start<=end){
   int mid = start+(end-start)/2;
       if(a[mid] == target){
           result = mid;
           start = mid+1;
       }else if(target<a[mid]){
           end = mid-1;
       }else{
           start =  mid+1;
       }
   }
   return result;
}
int main() {
    vector<int> a = {1,2,4,4,4,4,7,8,9};
    int target = 4;
    cout<<binarySearch( a , target);
   
   
}