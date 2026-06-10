#include<iostream>
#include<vector>


using namespace std;

int result(vector<int> arr, int l , int r){
    //calculate prefix sum
    vector<int> prefix_sum(arr.size()) ;
    prefix_sum[0]= arr[0];
    for(int i = 1 ; i<arr.size(); i++){
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
    }
    if(l==0){
        return prefix_sum[r];
    }
    int res = prefix_sum[r]-prefix_sum[l-1];
    return res;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,0};
    cout<<result(arr,1,6);
}
