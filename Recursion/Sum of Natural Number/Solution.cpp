#include <iostream>

using namespace std;
int func(int n ,int k){
    if(n==0){
      return k;
    }
    return func(n-1,k+n);
}
int main(){
    int n = 5;
    int k = 0;
    cout<<func(n,k);
}