#include <iostream>
#include <vector>
using namespace std;

int main(){
   vector<int> nums = {1,4,4,4,4,4,4,6,7,9};
   int start = 0 ;
   int end = nums.size()-1;
   int target = 4;
   int index = 0;
  while(start<=end){
    int mid = start + (end-start)/2;
    if(nums[mid]==target){
       index = mid;
       end = mid-1;
    }else if(nums[mid]>target){
       end = mid-1;
    }else{
      start = mid + 1;
    }
}
    cout<<index<<endl;
}