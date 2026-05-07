#include<iostream>

using namespace std;

void megre(int arr[] , int low , int mid ,int high){
    //setting auxillary space;
    int n1 = mid - low +1;
    int n2 = high - mid;
    int left[n1];
    int right[n2];
    for(int i = 0 ; i<n1; i++){left[i]=arr[low+i];}
    for(int i = 0 ; i<n2; i++){right[i]=arr[mid+1+i];}

    int i = 0;
    int j = 0;
    int k = low;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k] = left[j];
            k++;
            j++;
        }else{
            arr[k]=right[i];
            i++;
            k++;
        }
    }
    while(i<n1){
    arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
    arr[k]=right[j];
        j++;
        k++;
    }
}
int main(){

}