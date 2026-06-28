#include<iostream>

using namespace std;

int countZero(int x){
    int factorial = 1;
    for(int i = x ; i>0 ; i--){
        factorial *= i;
    }
    int count = 0;
    while(factorial%10 == 0){
            count++;
        factorial /= 10;
    }
    return count;
}
int main(){
    int s = 10;
    cout<<countZero(s);
}