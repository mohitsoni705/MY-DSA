#include<iostream>

using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
int searchTarget(Node *head , int target){
    if(head == NULL)return -1;
    int count = 1;
    Node *curr = head;
    while(curr != NULL ){
        if(curr->data == target){
            return count;
        }else{
        count++;
        curr = curr->next;
        }
    }
    return -1;
}
void recursive(Node *head){
    if(head == NULL)return;
    cout<<head->data<<" ";
    recursive(head->next);
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    // recursive(head);0
    cout<<searchTarget(head,20);
}
