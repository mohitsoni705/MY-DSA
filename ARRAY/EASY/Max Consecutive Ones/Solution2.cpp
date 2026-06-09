#include<iostream>
#include<vector>
using namespace std;

int ones(vector<int> a){
    int prevCount = 0;
    int count = 0;
    for(int i = 0 ; i<a.size(); i++){
        if(a[i]==1){
            count++;
        }else{
            prevCount = max(count,prevCount);
            count=0;
        }
    }
    int res = max(prevCount,count);
    return res;
}

int main(){
    vector<int> a = {1,0,1,1,1,1,0,1,1,1};
    cout<<ones(a);
}