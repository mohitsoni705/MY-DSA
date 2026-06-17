#include<iostream>
#include<vector>

using namespace std;

int factorial(int x){
    int fact = 1;
    for(int i = x; i>=1; i--){
        fact *= i;
        x--;
    }
    return fact;
}
int main(){
    int x = 30 ;
    cout<<factorial(5);
}