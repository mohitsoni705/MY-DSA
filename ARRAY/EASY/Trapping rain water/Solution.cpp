#include<iostream>
#include<vector>

using namespace std;

int trappingRain(vector<int>  a){
    int res = 0 ;
    for(int i = 1 ; i<a.size()-2 ; i++){
        int leftMax = a[i];
        //to get LeftMax
        for(int j = 0 ; j<i; J++){
            leftMax = max(leftMax, a[j]);
        }
        //to get RightMax
        int rightMax = a[i+1];
        for(int k = i+1 ; k<a.size()-1; k++){
            rightMax = max(rightMax , a[k]);
        }
        res = res + min(leftMax, rightMax) - a[i];
    }
}
int main(){
    vector<int> a = {3,0,1,2,5};
    cout<<trappingRain(a);
}