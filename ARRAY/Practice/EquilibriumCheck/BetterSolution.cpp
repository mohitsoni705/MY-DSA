#include<iostream>
#include<vector>

using namespace std;

bool equi(vector<int> arr){
    int totalSum = 0;
    for(int i = 0; i<arr.size(); i++){
        totalSum += arr[i];
    }
    int leftSum  = 0;
    for(int i = 0 ;i<arr.size(); i++){
        if(leftSum == totalSum - arr[i] - leftSum){
            return true;
        }else{
            leftSum += arr[i];
        }
    }
    return false;
}
int main(){
    vector<int> a ={2,2,4,2,5,2};
    cout<<equi(a);
}