#include<iostream>
#include<vector>

using  namespace std;

int peak(vector<int> arr){
    int n = arr.size();
    int peakElement = -1;
    if(n==1)return arr[0];
    if(arr[0]>=arr[1]){
        peakElement = arr[0];
    }
    if((arr[n-1]>=arr[n-2])){
        peakElement = arr[n-1];
    }
    for(int i = 1; i<n-1; i++){
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
            peakElement = arr[i];
        }
    }
    return peakElement;
}
int main(){
    vector<int> arr = {1,2,3,4,5,4,7,8,9};
    cout<<peak(arr);
}