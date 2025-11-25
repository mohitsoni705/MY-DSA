#include <iostream>
using namespace std;

int Sumfunc(int n){
    if(n==0) return 0;
    return n%10 + Sumfunc(n/10);
}
int main() {
    int n = 43230527;
    cout << Sumfunc(n) << endl;
    return 0;
}