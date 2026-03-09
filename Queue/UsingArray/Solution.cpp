#include<iostream>
using namespace std;

struct Queue{
    int *arr;
    int front, cap , size;
    Queue(int c){
        arr = new int[c];
        cap = c;
        size = 0;
        front = 0;
    }
    bool isFull(){ return(size == cap);}
    bool isEmpty(){return(size == 0);}

    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }
    int getRear(){
        if(isEmpty()){
            return -1;
        }
        return arr[(front + size-1) % cap];
    }
    void enqueue(int val){
        if(isFull()){
            cout<<"Queue is full";
            return;
        }
        int rear = (front + size)%cap;
        arr[rear]=val;
        cout<<"Successfully Enqueued";
        size++;
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is Empty";
            return;
        }
        front = (front + 1 ) % cap;
        size--;
    }

};
int main(){
    Queue q = Queue(10);
    q.dequeue();
    
}