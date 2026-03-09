#include<iostream>
#include<vector>

using namespace std;

int maxDiff(vector<int> arr){
    int res = arr[0]-arr[1];
    int minValue = arr[0];
    for(int i = 1; i<arr.size(); i++){
        res = max(res,arr[i]-minValue);
        minValue = min(minValue,arr[j]);
    }
    return res
}
int main(){
    vector<int> arr = {2,3,4,5,6,8,1};
    cout<<maxDiff(arr);
}