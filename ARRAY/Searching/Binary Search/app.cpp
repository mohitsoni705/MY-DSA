#include <iostream>
#include <vector>
using namespace std;
int main(){
   vector<int> a = {1,2,3,4,5,6,7,8,9};
   int  start = 0 ;
   int end = a.size()-1;
   int med = start+(end-start)/2;
   cout<<med<<" ";
}