#include <iostream>
#include <vector> 
using namespace std;
int main(){
 vector<int> a = {0, 1, 4, 0, 5, 2};
  int start = 0 ;
  int l = a.size()-1;
  while(start<=l){
    if(a[start]<=0){
      swap(a[start],a[l]);
      l--;
    }
      start++;
  }
  for(auto n: a){
    cout<<n<<" ";
  }
}