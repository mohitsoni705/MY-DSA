#include<iostream>

using namespace std;

int main(){
    int m = 3;
    int *arr[3];
    // arr = new int *[m];
    for(int i = 0 ; i<m; i++){
        arr[i] = new int [3];
        for(int j = 0; j<3; j++){
            arr[i][j] = i+j;
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}