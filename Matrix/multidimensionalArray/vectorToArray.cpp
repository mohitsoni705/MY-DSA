#include<iostream>
#include<vector>

using namespace std;


int main(){
    vector<int> arr[3];
    for(int i = 0 ; i<3; i++){
        for(int j = 0; j<i+1; j++){
            arr[i].push_back(i+j);
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}