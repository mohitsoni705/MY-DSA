#include<iostream>

using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int val){
        key = val;
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
void preorder(Node *root){
    if(root!= NULL){
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" "; 
    }
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right= new Node(30);
    root->left->left  = new Node(11);
    root->left->left->right = new Node(12);
    root->right->left = new Node(21);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
}