#include<iostream>
#include<vector>

using namespace std;

int stockBuy(vector<int> a){
    int profit = 0;
    for(int i = 1 ; i<a.size(); i++){
        if(a[i-1]>a[i]){
            profit +=(a[i]-a[i-1]);
        }
    }
    return profit;
}
int main(){
    vector<int> a = {1,5,3,1,2,8};
    cout<<stockBuy(a);
}