#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> a = {1,2,3,4,5,6,6};
    bool tag = false;
    if(a.size()== 1){
        return tag=true;
    }
    for(int i = 0 ; i<a.size()-1; i++){
        if(a[i+1]>=a[i]){
            tag = true;
        }else{
            tag = false;
            return;
        }
    }
}