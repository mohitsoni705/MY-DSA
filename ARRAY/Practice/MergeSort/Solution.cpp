#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> &a , int s , int e , int mid){
    int n1 = mid - s + 1;
    int n2 = e-mid;
    int leftArr[n1];
    int rightArr[n2];

    for(int i = 0 ; i<n1; i++){
         leftArr[i] = a[s + i];
    }
    for(int i = 0 ; i<n2; i++){
         rightArr[i] = a[mid+i+1];
    }

    //
    int k = s;
    int i = 0;
    int j = 0;
    while(i<n1 && j<n2){
        if(leftArr[i]<=rightArr[j]){
            a[k]=leftArr[i];
            i++;
            k++;
        }else{
            a[k]=rightArr[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        a[k]=leftArr[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=rightArr[j];
        j++;
        k++;
    }


}
void mergeSort(vector<int> &a , int s , int e){
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;
    //left 
    mergeSort(a,s,mid);
    //right
    mergeSort(a,mid+1,e);
    //merge
    merge(a,s,e,mid);


}

int main(){
    vector<int> a = {9,8,7,6,5,4,3,2,1};
    int start = 0;
    int end = a.size()-1;
    mergeSort(a,start,end);
    for(auto i: a){
        cout<<i<<" ";
    }
}