#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    //pushing in stack
    s.push(10);
    s.push(20);
    s.push(30);
    //get top element
    cout<<"Stack top element is :"<<s.top()<<endl;
    //poping in stack
    s.pop();
    //check if empty
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack top element is :"<<s.top()<<endl;
    }
    //checking size of stack
    cout<<"Size of stack is :"<<s.size()<<endl;

}