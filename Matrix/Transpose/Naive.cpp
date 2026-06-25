#include<iostream>
#include<vector>

using namespace std;

int main(){
    int m = 4;
    int n = 4;
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int temp[4][4];
    for(int i = 0; i<m; i++){
        for(int j = 0; j<m; j++){
            temp[j][i] = arr[i][j];
        }
    }
    for(int i = 0; i<m; i++){
        for(int j = 0; j<m; j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }

}