#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int arr1[] = {10,20,15};
    int arr2[] = {5,6,6,15};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int c = n + n2;
    int arr3[n+n2]; 
    for(int i = 0; i<n; i++){
        arr3[i]=arr1[i];
    }
    for(int j = 0; j<n2; j++){
        arr3[j+n]=arr2[j];
    }
    sort(arr3,arr3+n2+n);
     for(int i = 0; i<n+n2; i++){
        cout << arr3[i] << " ";
    }
}