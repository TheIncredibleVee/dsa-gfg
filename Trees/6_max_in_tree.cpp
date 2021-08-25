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

int maxTree(Node *root){
    if(root==NULL)
        return INT_MIN;
    else{
        return max(cutt->data, max(maxTree(root->left), maxTree(root->rigt));
    }
}

int main(){
    return 0;
}