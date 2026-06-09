#include<iostream>
#include <set>
#include<vector>

using namespace std;

int main(){
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {6,1,1,1,1,12,2,7,8,9,1,1};
    vector<int> arr;

    // Two pointer approach
    int i = 0;
    int j = 0;
    while(i<a.size() && j<b.size()){
        if(a[i] == b[j]){
            i++;
            j++;
        }
        if(a[i] != b[j]){
            arr.push_back(a[i]);
            arr.push_back(b[j]);
            i++;
            j++;
        }
    }
    for(auto i :arr){
        cout<<i<<" ";
    }















    // setApproach
    // for(int i = 0 ; i<a.size(); i++){
    //     sett.insert(a[i]);
    // }
    // for(int j = 0 ; j<b.size(); j++){
    //     sett.insert(b[j]);
    // }
    // for(auto i : sett){
    //     cout<<i<<" ";
    // }

    // steps
    // add all element in one array 
    // then make it set
    //or
    //make a set all element in that
    //then add set elements to array in a sorted order
    //or
    //we can use two pointer approach

}