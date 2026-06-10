#include<iostream>
#include<vector>

using namespace std;

int trapping(vector<int> arr){
    
    if(arr.empty())return 0;
    
    
    vector<int> leftArray;
    int leftMost = arr[0];
    for(int i = 0; i<arr.size(); i++){
        leftArray.push_back(max(leftMost,arr[i]));
        leftMost = max(leftMost,arr[i]);
    }

    int rightMost = arr[arr.size()-1];
    vector<int> rightArray(arr.size());
    for(int i = arr.size()-1; i>=0; i--){
        rightArray[i]= max(rightMost,arr[i]);
        rightMost = max(rightMost , arr[i]);
    }

    //calculate min resut
    int res = 0;
    for(int i = 1 ; i<arr.size()-1; i++){
        res += (min(leftArray[i],rightArray[i])-arr[i]);
    }
    return res;
}
int main(){
    vector<int> a ={3,0,1,2,5};
    cout<<trapping(a)<<" ";
}