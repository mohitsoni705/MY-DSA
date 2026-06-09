#include<iostream>
#include<vector>


using namespace std;

int kadans(vector<int> a){
    int currSum = 0;
    int maxSum = 0;
    for(int i = 0 ; i<a.size(); i++){
        currSum = max(currSum,a[i]+currSum);
        maxSum = max(currSum,maxSum);
    }
    return maxSum;
}

int main(){
    vector<int> a = {2,3,-8,7,-1,2,3};
    cout<<kadans(a);
}