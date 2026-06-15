#include<iostream>
#include<vector>

using namespace std;

int twoSum(vector<int> arr , int sum){
    for(int i = 0; i<arr.size(); i++){
        for(int j = i+1; j<arr.size(); j++){
            if(arr[i]+arr[j]==sum){
                return 1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    cout<<twoSum(arr,10);

}