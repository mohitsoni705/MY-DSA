#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxDifference(vector<int> a ){
    int res =  0;
    
    int minVal = a[0];
    for(int i = 0 ; i<a.size(); i++){
        res = max(res,a[i]-minVal);
        minVal = min(minVal,a[i]);
    }
    return res;
}
int main(){
    vector<int> a = {2,3,10,6,4,8,1};
    cout<<maxDifference(a);
}