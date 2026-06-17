#include<iostream>
#include<vector>

using namespace std;

int factorial(int x){
    if(x ==1){return 1;}
    return x*factorial(x-1);
}
int main(){
    int x = 30 ;
    cout<<factorial(5);
}