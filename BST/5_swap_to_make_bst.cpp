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

Node *prevv=NULL,*first=NULL,*second=NULL;
void fixBST(Node* root)
{
    if (root == NULL)
        return;
    fixBST(root->left);
    if(prevv!=NULL && root->key<prevv->key){
        if(first==NULL)
            first=prevv;
        second=root;
    }
    prevv=root;

    fixBST(root->right);
}

int main(){
    int temp=first->key;
    first->key=second->key;
    second->key=temp;
    return 0;
}