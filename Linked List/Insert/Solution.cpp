#include<iostream>

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
using namespace std;

Node* insertAtHead(Node *head, int x){
    Node *newNode = new Node(x);
    newNode->next = head;
    return newNode;
}
int main(){
    Node *head = NULL;
    head = insertAtHead(head, 10);
    head = insertAtHead(head, 20);
    head = insertAtHead(head, 300);
}