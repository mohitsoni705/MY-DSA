#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int twoSum(vector<int> arr , int start , int end , int sum){
    int left =  start;
    int right = end - 1;
    while(left<right){
        if(arr[left]+arr[right]==sum){
            return true;
        }else if(arr[left]+arr[right]>sum ){
            right--;
        }else{
            left++;
        }
    }
    return false;
}
int threeSum(vector<int> arr , int x){
    int i = 0;
     while(i<arr.size()){
        int a = x - arr[i];
        int ans = twoSum(arr,i+1,arr.size(),a);
        if(ans == 1){
            return 1;
        } 
        i++;
     }
     return 0;
}
int main(){
    vector<int> arr = {84 ,24, 14, 97, 93, 92 ,83};
    int x = 181;
    
    cout<<threeSum(arr,x);
}