#include<iostream>
#include<vector>

using namespace std;

bool palindrome(int x){
    int rev = 0;
    int temp = x;
    while(temp != 0){
        int digi = temp%10;
        rev = rev*10 + digi;
        temp /= 10;
    }
    if(rev == x){
        return true;
    }
    return false;

}
int main(){
    int x = 303 ;
    cout<<palindrome(x);
}