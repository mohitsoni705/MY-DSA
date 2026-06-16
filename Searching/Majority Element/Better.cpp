#include<iostream>
#include<vector>

using namespace std;


int majority(vector<int> arr){
     int res = 0 ; int count = 1 ;
     for(int i = 1; i<arr.size(); i++){
        if(arr[res]==arr[i]){
            count++;
        }else{
            count--;
        }
        if(count == 0){
            res = i;
            count = 1;
        }
     }
     //check n>2;
     int counte = 0;
     for(int i = 0 ; i<arr.size(); i++){
        if(arr[res]==arr[i]){
            counte++;
        }
     }
     if(counte<=arr.size()/2){
        return -1;
     }
     return arr[res];
}
int main(){
    vector<int> arr = {1,1,1,1,2,2};
    cout<<majority(arr);
} 