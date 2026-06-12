#include<iostream>
#include<vector>

using namespace std;

int sqaureRoot(int x){
    int start = 0;
    int end = x;
    int ans = -1;
    while(start<=end){
        int mid = start+(end - start)/2;
        int msq  = mid * mid;
        if(msq == x){
            return  mid;
        }else if(msq > x){
            end = mid - 1;
        }else{
            start = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
int main(){
    int x = 25;
    cout<<sqaureRoot(x);
}