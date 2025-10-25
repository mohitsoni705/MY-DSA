#include <iostream>
#include <vector>
using namespace std;
int BinaryDivide(int dividend , int divisor){
   int start = 0;
   int end = abs(dividend);
   int ans = 0 ;
   while(start<=end){
      int mid = start + (end - start)/2;
      if(abs(mid * divisor) == abs(dividend)){
         ans = mid;
        break;
      }else if (abs(mid * divisor) < abs(dividend)){
      ans = mid;
      start = mid + 1;
      }else{
      end = mid - 1 ;
      }
   }
   if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)){
      return -ans;
   }else{
      return ans;
   }
}
 int main (){
    int dividend = 22;
    int divisor = -3;
    cout<< BinaryDivide( dividend , divisor)<< endl;
 }