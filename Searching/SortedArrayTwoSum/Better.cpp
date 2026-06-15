#include<iostream>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int> arr , int sum){
    int left =  0;
    int right = arr.size()-1;
    while(left<right){
        if(arr[left]+arr[right]==sum){
            return {left,right};
        }else if(arr[left]+arr[right]>sum ){
            right--;
        }else{
            left++;
        }
    }
    return {-1,-1};
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    cout<<twoSum(arr,10)[0];
    cout<<":";
    cout<<twoSum(arr,10)[1];

}