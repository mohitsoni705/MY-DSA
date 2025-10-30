#include<iostream>

using namespace std;

int print1ToN(int n ,int i){
    if(i==n){
        return i;
    }
    cout<<i<<" ";
    print1ToN(n,i+1);
}
int main(){
    int n = 10;
    int i = 1;
    cout<<print1ToN(n,i);
}