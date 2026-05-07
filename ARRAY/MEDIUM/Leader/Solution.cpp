#include<iostream>
#include<vector>

using namespace std;

void getLeader(vector<int> a){
    int leader = a[a.size()-1];
    cout<<leader<<" ";
    for(int i = a.size()-2 ; i>=0; i--){
        if(a[i]>=leader){
            cout<<a[i]<<" ";
            leader= a[i];
        }   
    }
}
int main(){
    vector<int> a = {1, 2, 5, 3, 1, 2};
    getLeader(a);
}