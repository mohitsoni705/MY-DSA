#include<iostream>

using namespace std;

struct Dequeue{
    int front , rear , size , capacity;
    int *arr;
    Dequeue(int c){
        int front = -1;
        int rear = 0;
        arr = new int[c];
        capacity = c;
        size = 0;
    }
    bool isFull(){
        return size == capacity;
    }
    bool isEmpty(){
        return size == 0 ;
    }
    void insertFront(int key){
        if(isFull()){
            return;
        }
        if(front == -1){
            front = 0;
            rear = 0;
        }else{
            front = (front - 1 + capacity) % capacity;
        }
        arr[front] = key;
        size++;
    }
    void insertRear(int key){
        if(isFull()){
            return;
        }
        if(front == -1){
            front = 0;
            rear = 0;
        }else{
         rear  = (rear + 1 + capacity) % capacity;
        }
        arr[rear] = key;
        size++;
    }
    void deleteRear(){
        if(isEmpty()){
            return;
        }else{
           rear = (rear - 1) % capacity;
        }
    }
    void deleteFront(){
        if(isEmpty()){
            return;
        }else{
           front = (front + 1) % capacity;
        }
    }
};
int main(){
}