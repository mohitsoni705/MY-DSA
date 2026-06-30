#include<iostream>
#include<vector>

using namespace std;

void addingMatrix(vector<vector<int>> A,vector<vector<int>> B){
    for(int i = 0; i<A.size(); i++){
        for(int j = 0; j<A[0].size(); j++){
            cout<<A[i][j]+B[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>> A = {{1,2},{3,4}}; 
    vector<vector<int>> B = {{3,4},{2,1 }};
    addingMatrix(A,B); 
}