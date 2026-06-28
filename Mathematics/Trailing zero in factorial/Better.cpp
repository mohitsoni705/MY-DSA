#include<iostream>

using namespace std;

int countZero(int n){
    int fact = 1 ;
    int zero = 0;
    for(int i = 2; i<=n;  i++){
        fact *= i;
        while(fact % 10 == 0){
            zero++;
            fact /= 10;
        }
        fact %= 1000000;
    }
    return zero;
}
int main(){
    // int s = 10;
    cout<<countZero(10);
}