#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> nums = {3,0,1};
  int n = nums.size();
  int total1 = n*(n+1)/2;
  int total2 = 0;
  int missing = 0;
  for(int i = 0 ; i<nums.size(); i++){
    total2 += nums[i];
    missing = total1 - total2;
  }
  cout<<missing<<endl;
  
}