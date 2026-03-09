#include<iostream>
#include<algorithm>
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

int height(Node *root){
    if(root == NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1; 
}
int main(){
    
}