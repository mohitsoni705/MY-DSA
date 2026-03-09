#include<iostream>
#include<vector>

using namespace std;

void Frequencies(vector<int> arr){
    int number = arr[0];
    int count = 1;
    for(int i = 1 ; i<arr.size(); i++){
        if(arr[i]==number){
            count++;
        }else{
            cout<<number<<" ";
            cout<<count<<endl;
            count=1;
            number = arr[i];
        }
    }
}
int main(){
    vector<int> arr = {10,10,10,25,30,30};
}