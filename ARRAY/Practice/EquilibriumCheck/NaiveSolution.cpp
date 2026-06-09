#include<iostream>
#include<vector>

using namespace std;

bool equi(vector<int> arr){
    for(int i = 0; i<arr.size(); i++){
        int leftSum = 0;
        for(int j =0; j<i; j++){
            leftSum += arr[j];
        }
        int rightSum = 0;
        for(int k = i+1; k<arr.size(); k++){
            rightSum += arr[k];
        }
        if(leftSum == rightSum){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> a ={2,2,4,2,2};
    cout<<equi(a);
}