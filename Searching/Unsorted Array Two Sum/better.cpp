#include<iostream>
#include<vector>
#include<map>

using namespace std;

int twoSum(vector<int> arr ,int x){
    map<int ,int> mp;
    for(int i = 0 ; i<arr.size(); i++){
        int sum = x-arr[i];
        if(mp.find(sum) != mp.end()){
            return true;
        }
        mp[arr[i]]=i;
    }
    return false;
}
int main(){
    vector<int> arr = {3,5,9,2,8,10,11};
    int x = 18;
    cout<<twoSum(arr,x);
}