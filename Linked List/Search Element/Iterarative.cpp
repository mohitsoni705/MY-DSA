#include<iostream>

using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x ;
        next = NULL;
    }
};
int searchElement(Node *head , int target){
    int count = 1;
    if (head == NULL) return -1;
    
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(30);
    cout<<searchElement(head,30);
}