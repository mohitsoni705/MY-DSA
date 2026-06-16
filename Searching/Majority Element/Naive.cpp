#include<iostream>
#include<vector>

using namespace std;


int majority(vector<int> arr){
     for(int i = 0 ; i<arr.size(); i++){
         int count = 1;
         for(int j = i+1; j<arr.size(); j++){
            if(arr[i]==arr[j]){
                count++;
            }
         }
         if(count >arr.size()/2){
            return i;
         }
     }
}
int main(){
    vector<int> arr = {1,1,2,2,2};
    cout<<majority(arr);
} 