#include<iostream>
#include<vector>

using namespace std;

int countOccurence(vector<int> arr , int k){
    int count = 0;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i]==k){
            count++;
        }
    }
    return count;
}
int main(){
    vector<int> arr = {2,2,2,2,2,3,4,5,6,7,8,9};
    cout<<countOccurence(arr,2);
}