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

int treeSize(Node *root){
    if(root==NULL)
        return 0;
    else{
        return 1+ treeSize(root->left)+ treeSize(root->right);
    }
}

int main(){
    return 0;
}