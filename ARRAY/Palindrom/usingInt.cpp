  #include <iostream>
  #include <vector>
  using namespace std;
  int main(){
      int num = 1234;
      int temp = num;
      int reverse = 0;
    int i = 0;
   while(i<4){
      int digit = temp % 10;
      reverse = reverse * 10 + digit;
      temp = temp/10;
     i++;
    }
          cout<<num;
          cout<<reverse;
  }