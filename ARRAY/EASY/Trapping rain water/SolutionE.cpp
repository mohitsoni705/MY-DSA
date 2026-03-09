#include<iostream>
#include<vector>

using namespace std;

int trapping(vector<int> a , int n){
    //calculate left most of each element in a array
    //calculate right most of each element in a array
    //now simply iterate and subtract and store the result
    vector<int> leftMax;
    vector<int> rightMax;
    int res = 0;

    leftMax[0]=a[0];
    for(int i = 1; i<a.size(); i++){
        leftMax[i]=max(leftMax[i-1],a[i]);
    }
    rightMax[a.size()-1] = a[a.size()-1];
    for(int i = a.size()-2; i>=0; i--){
        rightMax[i]=max(rightMax[i+1],a[i]);
    }
    for(int i = 0; i<a.size(); i++){
        res = res + min(leftMax[i],rightMax[i])-a[i];
    }
    return res;
}
int main(){
    vector<int> arr = {3,0,1,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<trapping(arr,n);

}