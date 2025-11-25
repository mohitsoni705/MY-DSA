#include <iostream>
#include <vector>
using namespace std;

int findSquare(int n){
    int start = 0 , end = n;
    int ans = -1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(mid*mid == n){
            return mid;
        }else if(mid * mid <n){
             ans = mid ;
             start = mid + 1;
            }else{
            end = mid - 1;
        }
    }
    return ans;
}
//n number tak chalega
//mid find karo 
// multipy karo mid se mid agar answere is equal to n return mid
//nahi tohh bada aya toh start = mid + 1
//or chota aya toh end = mid -1
int main(){
    int num = 10;
    cout<<"Hello World"<<endl;
    cout<<findSquare(num);
}