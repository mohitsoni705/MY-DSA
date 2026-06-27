#include<iostream>
#include<vector>

using namespace std;

void flip(vector<vector<int>> &arr){
    for(int i = 0; i<arr[0].size(); i++){
        int p1 = 0;
        int p2 = arr[0].size()-1;
        while(p1<p2){
            swap(arr[i][p1],arr[i][p2]);
            p1++;
            p2--;
        }
    }
        for(int i = 0; i<arr[0].size(); i++){
        for(int j = 0; j<arr[0].size(); j++){
            if(arr[i][j]==1){
                arr[i][j]=0;
            }else{
                arr[i][j]=1;
            }
        }
    }
}
int main(){
    vector<vector<int>> arr = {{1,1,1},{0,1,0},{1,0,1}};
    flip(arr);
}