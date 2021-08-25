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

int maxLvl=0;
void left(Node *root, vector<int> res, int level){
    if(root==NULL){
        return;
    }
    if(maxLvl==level){
        res.push_back(root->data);
        maxLvl=level;
    }
    left(root->left,res,level+1);
    left(root->right,res,level+1);
}

void left2(Node *root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int count=q.size();
        for(int i=0;i<count;++i){
            Node *curr=q.front();
            if(i==0){
                res.push_back(curr->data);
            }
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
    }
}

int main(){
    return 0;
}