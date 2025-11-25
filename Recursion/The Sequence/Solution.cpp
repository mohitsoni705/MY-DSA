#include<iostream>
using namespace std;
int s(int n){
    if(n==0)return 1;
    return n + n*(s(n-1));
}
int main(){
    int n = 2;
    cout<<s(n);
}
