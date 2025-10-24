#include <iostream>
#include <vector>
using namespace std;
int BinarySearch(vector<vector<int>> nums , int start , int end , int target){
    while(start<=end){
        int mid = start + (end - start) / 2;
        int row = mid / nums[0].size();
        int col = mid % nums[0].size();
        if(nums[row][col]==target){
            cout<<row<<endl;
            cout<<col<<endl;
            return mid;
        }else if(nums[row][col]>target){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return -1;
}
int main(){
    vector<vector<int>> nums = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int row = nums.size();
    int col = nums[0].size();
    int start = 0;
    int end = row * col - 1;
    cout<<BinarySearch(nums , start , end , 7);
}