#include<iostream>

using namespace std;

struct stack{
    int *arr;
    int top;
    int cap;

    stack(int c){
        cap = c;//dyanamic memory allocation
        top = -1;
        arr = new int[cap];
    }
    //push
    //isempty
    //isfull
    //pop
    //peek
    int isEmpty(){
        return top == -1;
    }
    int isFull(){
        return top == cap - 1;
    }
    void push(int value){
        if(isFull()){
            cout<<"Stack Overflow";
        }else{
            arr[++top]=value;
            cout<<value<<" pushed to stack\n";
        }
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack Underflow";
            return -1;
        }else{
            top--;
            return arr[top+1];
        }
    }
    int peek(){
        if(isEmpty()){
            cout<<"Stack is empty \n";
            return -1;
        }else{
            return arr[top];
        }
    }
};

    int main(){
        stack st(5);
        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);
        st.push(50);
    }
    