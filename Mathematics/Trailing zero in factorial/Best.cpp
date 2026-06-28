#include<iostream>

using namespace std;

int countZero(int n){
    int res = 0;
    for(int i = 5; i<=n; i *= 5){
        res = res + n/i;
    }
    return res;
}
int main(){
    // int s = 10;
    cout<<countZero(23456789);
}