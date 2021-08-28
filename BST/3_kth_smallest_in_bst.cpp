#include<bits/stdc++.h>

using namespace std;


struct Node{
    Node *right;
    Node *left;
    int data;
    int lCount;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
        lcount=0;
    }
};

Node* kthSmallest(Node* root, int k)
{
    if (root == NULL)
        return NULL;

    int count = root->lCount + 1;
    if (count == k)
        return root;

    if (count > k)
        return kthSmallest(root->left, k);

    return kthSmallest(root->right, k - count);
}

int count=0;
void small(Node *root, int k){
    if(!root){
        small(root->left,k);
        count++;
        if(k==count){
            cout<<root->data;
        }
        small(root->right);
    }
}

int main(){
    return 0;
}