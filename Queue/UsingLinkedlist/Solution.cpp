#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
struct Queue{
    Node *front, *rear;
    Queue(){
        front = rear = NULL;
    }
    void enqueu(int data){
        Node *temp = new Node(data);
        if(front == NULL){
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    void dequeu(){
        if(front == NULL)return;
        Node *temp = front;
        front = front->next;
        if(front == NULL)rear = NULL;
        delete(temp);
    }
};
int main(){
   Queue q = Queue();
   q.enqueu(10);
    q.enqueu(20);
    q.dequeu();
    q.enqueu(30);
}