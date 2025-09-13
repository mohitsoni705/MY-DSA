  #include <iostream>
  #include <vector>
  using namespace std;
  int main(){
      string str = "ABCD";
      int reverse = 0;
      int i = str.length()-2;
      cout<<str;
       while(i<str.length()){
          cout<<str[i];
          i--;
      }
  }