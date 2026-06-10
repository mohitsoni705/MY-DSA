#include<iostream>
#include<vector>

using namespace std;

int trapping(vector<int> arr){
    int res = 0;
    for(int i = 1; i<arr.size()-1; i++){
        
        int leftMost = arr[i-1];
        for(int k = 0; k<=i; k++){
            leftMost = max(leftMost , arr[k]);
        }

        int rightMost = arr[i+1];
        for(int j = i+1; j<=arr.size(); j++){
            rightMost = max(rightMost , arr[j]);
        }

        res += min(leftMost , rightMost)-arr[i];
    }

    return res;
}
int main(){
    vector<int> a ={2,1,2,4,5};
    cout<<trapping(a)<<" ";
}