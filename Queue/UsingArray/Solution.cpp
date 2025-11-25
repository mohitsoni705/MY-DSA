#include<iostream>

using namespace std;

struct queue{
    int *arr;
    int front;
    int rear;
    int cap;

    queue(int c){
        int cap = c;
        arr = new int[cap];
        front = -1;
        rear = -1;
    }
    void enqueue(int x){
        if(isFull()){
            cout<<"Queue is full"<<endl;
            return;
        }else{
            if(front == -1 ){
               front = 0; 
            }
            rear++;
            arr[rear]=x;
        }
    };
    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }else{
            front++;
        }
    };
    int getFront(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            return arr[front];
        }
    };
    int getRear(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            return arr[rear];
        }
    };
    bool isFull(){
        return rear == cap - 1;
    };
    bool isEmpty(){
        return front == -1 ;
    };
    int size(){
        if(isEmpty()){
            return 0;
        }else{
            return rear - front + 1;
        }
    };
};
int main(){
    struct queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<"Front element is: "<<q.getFront()<<endl;
    cout<<"Rear element is: "<<q.getRear()<<endl;
    cout<<"Queue size is: "<<q.size()<<endl;
    q.dequeue();
    cout<<"Front element is: "<<q.getFront()<<endl;
    
}