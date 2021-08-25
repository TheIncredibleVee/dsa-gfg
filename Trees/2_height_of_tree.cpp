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

int height(Node * tree){
    if(root==NULL){
        return 0;
    }
    else{
        return max(height(root->left), height(root->right))+1;
    }
}


int main(){
    return 0;
}