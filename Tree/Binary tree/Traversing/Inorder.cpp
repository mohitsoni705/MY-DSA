#include<iostream>

using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key = k;
        left = NULL;
        right = NULL;
    }
};
void inorder(Node *root){
    if(root != NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}


int main(){
    Node *root = new Node(10);
    root->right = new Node(50);
    root->left = new Node(60);
    root->right->right = new Node(20);
    root->right->left = new Node(30);
    inorder(root);
}