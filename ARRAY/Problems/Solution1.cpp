#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> arr = {1,2,3,4,5};
    int val = 90;
    arr.push_back(val);
    for(int i = 0 ; i <arr.size(); i++){
        cout<<arr[i];
    }
}