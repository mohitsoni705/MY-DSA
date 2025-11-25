#include <iostream>

using namespace std;
int func(int n ){
   if(n==0){
    return 1;
   }
   return n*func(n-1);
}
int main(){
    int n = 4;
    cout<<func(n);
}