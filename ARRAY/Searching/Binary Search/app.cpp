#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> numbers , int target){
    int start = 0;
    int ans = -1;
    int end = numbers.size() - 1;
    while(start <= end){
        int mid = start + (end - start)/ 2;
        if(numbers[mid] == target){
            return mid;
        }else if(numbers[mid] < target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;

}
int main(){
    vector<int> numbers = {0,1,2,3,4,5,6,7,8,9};
    int target = 2;
    cout<<binarySearch(numbers , target)<<endl;
}