#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> numbers = {1, 2, 3, 4, 5};
    int a = 0 ;
    int l = a+1;
    while(l<numbers.size()){
        swap(numbers[a], numbers[l]);
        a++;
        l++;
    }
    for(auto num : numbers){
        cout<<num<<" ";
    }

}