#include<iostream>
#include<vector>


using namespace std;

int get(vector<int> a){
    int num = a[0];
    int count = 1;
    for(int i = 1; i<a.size(); i++){
        int curr = a[i];
        if(curr == num){
            count = 0;
        }
        if(count == 0){
            num = curr;
        }
    }
    return num;
}
int main(){
    vector<int> a ={4,1,2,4,5,1,2};
    cout<<get(a);
}