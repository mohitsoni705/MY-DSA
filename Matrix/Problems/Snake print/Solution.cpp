#include<iostream>
#include<vector>

using namespace std;

void print(vector<vector<int>> arr){
    for(int i = 0; arr.size(); i++){
        if(i%2 == 0){
            for(int j = 0; j<arr[0].size(); j++){
                cout<<arr[i][j]<<" ";
            }
        }else{
            for(int j = arr[0].size()-1; j>=0; j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
int main(){
    vector<vector<int>> arr = {{45, 48, 54},
             {21, 89, 87},
             {70, 78, 15}};
    print(arr);
}