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

int minValue(Node *root){
    if(root==NULL){
        return INT_MAX;
    }
    return min(roo->data, min(minValue(root->left), minValue(root->right)));
}

int maxValue(Node *root){
    if(root==NULL){
        return INT_MIN;
    }
    return max(roo->data, max(maxValue(root->left), maxValue(root->right)));
}

int isBST(Node* root)
{
    if (root == NULL)
        return 1;

    if (root->left!=NULL && maxValue(root->left) > root->key)
        return 0;

    if (root->right!=NULL && minValue(root->right) < root->key)
        return 0;

    if (!isBST(root->left) || !isBST(root->right))
        return 0;

    return 1;
}

bool isBSTeff(Node *root, int l,int r){
    if(root==NULL){
        return true;
    }
    if(roo->data>r){
        return false;
    }
    if(root->data<l){
        return false;
    }
    if(isBSTeff(roo->left,l,root->data)|| isBSTeff(roo->right,roo->data, r)){
        return false;
    }
    return true;
}

int prev=INT_MIN;
bool isBSTef(Node *root){
    if(!root){
        return true;
    }
    if(!isBSTef(root->left)){
        return false;
    }
    if(prev>=root->data){
        return false;
    }
    prev=root->data;
    if(!isBSTef(root->right)){
        return false;
    }
    return true;
}

int main(){
    return 0;
}