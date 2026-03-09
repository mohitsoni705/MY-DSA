#include<iostream>
#include<vector>

using namespace std;

void selectionSort(vector<int> &arr){
    for(int i =  0; i<arr.size(); i++){
        int min_element = i;
        for(int j=i+1 ; j<arr.size(); j++){
            if(arr[j]<arr[min_element]){
                min_element=j;
            }
        }
        swap(arr[i],arr[min_element]);
    }
}
int main(){
    vector<int> arr = {2,3,1,5,4};
    selectionSort(arr);
    for(int i : arr){
        cout<<i<<" ";
    }
}