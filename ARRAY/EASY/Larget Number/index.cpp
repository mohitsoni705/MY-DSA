#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = {3,3,6,4,4,3,3};
    int target = 0 ;
    int j = 1;
    for(int i =0 ; i<nums.size(); i++){
        if(nums[i]>target){
            target = nums[i];
        }
        j++;
    }
    cout<<target;
}