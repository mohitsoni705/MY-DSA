#include<iostream>

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

using namespace std;
 
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    cout<<head->next->prev->data;
}