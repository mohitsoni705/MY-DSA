#include <iostream>
#include <vector>
#include <climits>
 
using namespace std;

int main(){
    vector<int> v = {8, 8, 7, 6, 5};
    int largest = INT_MIN;
    int smallest = INT_MIN;
    for(int i = 0 ; i<v.size() ; i++){
       if(largest<v[i]){
        smallest = largest;
         largest = v[i];
       }
       if(smallest>v[i] && smallest<largest){
        smallest = v[i];
       }
       
    }
    cout<<"Largest: "<<largest<<endl;
    cout<<"Second Largest: "<<smallest<<endl;
}