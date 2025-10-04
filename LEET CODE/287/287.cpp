#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> num = {1,3,4,2,2};
  int ans = -1;
  for(int i = 0 ; i<num.size() ; i++){
    int index = abs(num[i]);
    if(num[index] < 0){
      ans = index;
      break;
    }
    num[index] *= -1;
  }
  cout<<ans;
}