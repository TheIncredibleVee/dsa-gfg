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

int max_width(Node *root){
    if(root==NULL){
        return 0;
    }
    queue<Node *> q;
    q.push(root);
    int res=0;
    while(!q.empty()){
        int cnt=q.size();
        res=max(res, cnt);
        for(int i=0;i<cnt;++i){
            Node *curr=q.front();
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
    }
    return res;
}

int main(){
    return 0;
}