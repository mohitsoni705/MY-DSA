#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int> arr= {1,1,2,3,3,4,4};
    auto it = unique(arr.begin() , arr.end());
    arr.erase(it,arr.end());
    for(auto a:arr){
        cout<<a;
    }
}