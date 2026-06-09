#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int windowSliding(vector<int> arr , int k){
    int maxSum = 0;
    for(int i = 0 ; i<k; i++){
        maxSum += arr[i];
    }
    //one window ahead 
    int currSum = 0;
    for(int i = k ; i<arr.size(); i++){
        currSum = maxSum + arr[i] - arr[i-k];
        maxSum = max(currSum,maxSum);
    }
    return maxSum;
}
int main(){
    vector<int> arr = {1,2,3,4,4,5};
    cout<<windowSliding(arr,3);
}