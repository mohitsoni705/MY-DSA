#include<iostream>
#include<vector>

using namespace std;

void quickSort(vector <int> &arr , int s , int end){
    if(s>=end)return;
    
    int i = s-1;
    int j = s;
    int pivot= end;
    while(j<pivot){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[j],arr[i]);
        }
        j++;
    }
    i++;
    swap(arr[i],arr[pivot]);
    //left sort
    quickSort(arr,s,i-1);
    quickSort(arr,i+1,end);
}

int main(){
    vector<int> arr = {9,8,7,6,5,4,3,2};
    quickSort(arr,0,arr.size()-1);
    for(auto i : arr){
        cout<<i<<" ";
    }
    
}