#include<iostream>

using namespace std;

int fun1(int n){
    if(n == 0){
        return ;
    }
    cout<<n<<endl;
    fun1(n-1);
}
int main(){
    cout<<fun1(22);
    return 0;
}
