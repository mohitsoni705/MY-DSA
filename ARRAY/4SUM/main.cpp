#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> numbers = {1, 2, 3, 4, 5 ,6, 7 , 7 , 8 , 8};
    for(int i = 0;  i< numbers.size(); i++){
        int element1 = numbers[i];
        for(int  j = i +1 ; j < numbers.size(); j++){
            int element2 = numbers[j];
            for(int k = j + 1; k < numbers.size(); k++){
                int element3 = numbers[k];
                for(int m = k + 1; m < numbers.size(); m++){
                    int element4 = numbers[m];
                    if(element1 + element2 + element3 + element4 == 30){
                        cout << "Quadruplet found: " << element1 << ", " << element2 << ", " << element3 << ", " << element4 << endl;
                    }
                }
            }
        }
    }

  
}