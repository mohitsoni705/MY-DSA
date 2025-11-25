#include<iostream>
#include<vector>


using namespace std;
struct stack{
    vector<int> v ;
    void push(int data){
        v.push_back(data);
        cout<<"Pushed "<<data<<endl;    
    }
    int pop(){
        if(!v.empty()){
            v.pop_back();
            return 1;
        }
    }
    int peek(){
        if(!v.empty()){
            return v.back();
        }
        return -1;
    }
};
int main(){
    struct stack s;
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
}
