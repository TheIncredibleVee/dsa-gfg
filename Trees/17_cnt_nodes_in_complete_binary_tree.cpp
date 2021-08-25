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

int countNaive(Node *root){
    if(root==NULL){
        return 0;
    }
    return 1+ countNaive(root->left)+ countNaive(root->right);
}

int count(Node *root){
    if(root==NULL){
        return 0;
    }
    Node *curr=root;
    int lh=0;
    while(curr!=NULL){
        lh++;
        curr=curr->left;
    }
    int rh=0;
    curr=root;
    while(curr!=NULL){
        rh++;
        curr=curr->right;
    }
    if(rh==lh){
        return pow(2,lh)-1;
    }
    else{
        return 1+ count(root->left)+ count(root->right);
    }
}

int main(){
    return 0;
}