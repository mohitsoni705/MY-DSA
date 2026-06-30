#include<iostream>
#include<vector>

using namespace std;

void print(vector<vector<int>> a){
    int up = 0;
    int low = 0;
    for(int i = 0; i<a.size(); i++){

        for(int j = i; j<a.size(); j++){
            up += a[i][j];
        }
        for(int k = i; k>=0; k--){
            low += a[i][k];
        }
    }
    cout<<up<<" "<<low;
}
int main(){
    vector<vector<int>> a ={{6,5,4},{1,2,5},{7,9,7}};
    print(a);
}