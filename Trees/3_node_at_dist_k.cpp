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

void nodeAtK(Node *root,int k,vector<int> &res){
    if(root==NULL){
        return;
    }
    if(k==0){
        res.push_back(root->data);
    }
    else{
        nodeAtK(root->left, k-1,res);
        nodeAtK(root->right, k-1, res);
    }
}

int main(){
    return 0;
}