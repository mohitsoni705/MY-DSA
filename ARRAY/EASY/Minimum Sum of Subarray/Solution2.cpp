#include<iostream>
#include<vector>

using namespace std;

int maxCount(vector<int> a ){
    int ans = 0;
    int n = a.size();
    for(int i = 0 ; i<n; i++){
        int mini = a[i];
        for(int j = i; j<n; j++){
            mini= min(mini , a[j]);
            ans += mini;
        }
    }
    return ans;
}

int main(){
    vector<int> a = {1,2,3,4};
    cout<<maxCount(a);

}