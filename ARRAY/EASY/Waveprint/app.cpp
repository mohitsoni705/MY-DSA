#include <iostream>
#include <vector> 
using namespace std;
int main(){
   vector<vector<int>> a = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
   for(int j = 0 ; j<a[0].size(); j++){
     if(j%2 == 0){
       for(int i =0 ;i<a.size(); i++){
         cout<<a[i][j]<<" ";
       }
     }
     if(j%2 == 1){
       for(int i = a.size()-1 ; i<a.size(); i--){
         cout<<a[i][j]<<" ";
       }
     }
    }
}