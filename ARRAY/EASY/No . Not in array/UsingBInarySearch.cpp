#include <iostream>
#include <vector>
using namespace std;
int findNumberNotPresent(vector<int> a){
    int start = 0;
    int end = a.size()-1;
    int result = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
       if(a[mid]==mid+1){
         start = mid+1;
       }else{
        result = mid+1;
        end = mid - 1;
       }
    }
    return result;
}
int main(){
    vector<int> a = {1,2,3,4,6,7,8,9};
    cout<<findNumberNotPresent(a);
}