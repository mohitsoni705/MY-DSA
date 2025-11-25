#include<iostream>
#include<unordered_set>

using namespace std;
//functions int unordered_set
int main(){
    unordered_set<int> s;
    for(int i = 0 ; i<10; i++){
        s.insert(i);
    }
    // cout<<s.size();
    s.clear();
    if(s.empty()){
        cout<<"set is empty";
    }


}