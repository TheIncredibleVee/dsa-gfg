#include<bits/stdc++.h>

using namespace std;


struct Node{
    Node *right;
    Node *left;
    int data;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

int height(Node *root){
    if(root==NULL){
        return 0;
    }
    return 1+max(height(root->left), height(root->right));
}

bool isBalanced(Node *root){
    if(root==NULL){
        return true;
    }
    int rh= height(root->right);
    int lh(root->left);
    return (abs(rh-lh)<=1 && isBalanced(root->right)&& isBalanced(root->left));
}

int isBalancedTree(Node *root){
    if(root==NULL){
        return 0;
    }
    int lh= isBalancedTree(root->left);
    if(lh==-1){
        return -1;
    }
    int rh= height(root->right);
    if(rh==-1){
        return  -1;
    }
    if(abs(lh-rh)>1)
        return -1;
    return max(lh,rh)+1;
}


int main(){
    return 0;
}