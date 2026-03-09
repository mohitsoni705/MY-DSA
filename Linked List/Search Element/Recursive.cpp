#include<iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
int pritnLLElements(Node *head , int target){
    if (head == NULL)  return -1;
    if (head->data == target) return 1; 

    int res = pritnLLElements(head->next , target);
    if (res == -1) return -1;
    return 1 + res;
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);
    int target = 20;
    cout<<pritnLLElements(head ,target);
    return 0;
}