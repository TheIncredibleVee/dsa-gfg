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

bool child_sum(Node *root){
    if(root==NULL){
        return true;
    }
    if(root->left==NULL && root->left==NULL){
        return true;
    }
    int res=0;
    if(roo->left!=NULL){
        res+=root->left->data;
    }
    if(root->right!=NULL){
        res+=root->right->data;
    }
    if(res!=root->data){
        return false;
    }
    return child_sum(root->left)&& child_sum(root->right);
}

int main(){
    return 0;
}