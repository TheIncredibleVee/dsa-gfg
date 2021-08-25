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


Node *prev=NULL;

Node *convert(Node *root){
    if(root==NULL){
        return NULL;
    }
    Node * head= convert(root->left);
    if(prev==NULL){
        prev=root;
    }
    else{
       root->left=prev;
       prev->right=head;
    }
    convert(root->right);
    return head;
}

int main(){
    return 0;
}
