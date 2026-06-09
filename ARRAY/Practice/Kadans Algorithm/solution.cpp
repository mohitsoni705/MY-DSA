#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int kadans(vector<int> arr){
    int start = 0;
    int maxSum = 0;
    for(int i = 0; i<arr.size(); i++){
        start = start + arr[i];
        if(start>maxSum){
            maxSum = start;
        }
        if(start<0){
            start = 0;
        }
    }
    return maxSum;
}
int main(){
    vector<int> arr = {1,3,-8,7,-1,2,3};
    cout<<kadans(arr);
}