#include<iostream>
#include<vector>

using namespace std;

int repeating(vector<int> arr){
    int slow =arr[0]; int fast= arr[0];
    do{
    slow=arr[slow];
    fast = arr[arr[fast]];
}while(slow != fast);
    slow=arr[0];
    while(slow != fast){
        fast = arr[fast];
        slow = arr[slow];
    }
    return fast;
}
int main(){
    vector<int> arr = {1,3,4,5,2,2};
    cout<<repeating(arr);
}