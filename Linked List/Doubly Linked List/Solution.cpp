#include<iostream>

using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};
Node *deleteKthNode(Node *head , int x){
    if
}
void traverse(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->prev = head;
    head->next->next->prev = head->next;
    traverse(head);
}