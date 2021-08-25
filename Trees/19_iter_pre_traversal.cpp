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

vector<int> inOrder(Node *root){
    vector<int> res;
    if(root==NULL){
        return res;
    }
    stack<Node *> s;
    s.push(root);
    Node *curr=root;
    while(curr!=NULL|| !s.empty()){
        while(curr!=NULL){
            s.push(curr->left);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        res.push_back(curr->data);
        curr=curr->right;
    }
    return res;
}


vector<int> preOrder(Node *root){
    vector<int> res;
    if(root==NULL){
        return res;
    }
    stack<Node *> s;
    s.push(root);
    while(!s.empty()){
        Node *curr=s.top();
        s.pop();
        res.push_back(root->data);
        if(curr->right!=NULL){
            s.push(curr->right);
        }
        if(curr->left!=NULL){
            s.push(curr->left);
        }
    }
    return res;
}

vector<int> preOrderSpaceOptimized(Node *root){
    vector<int> res;
    if(root==NULL){
        return res;
    }
    stack<Node *> s;
    s.push(root);
    Node *curr=root;
    while(curr!=NULL || !s.empty()){
        while(curr!=NULL){
            res.push_back(root->data);
            if(curr->right!=NULL)
                s.push(curr->right);
            curr=curr->left;
        }
        if(!s.empty()) {
            curr = s.top();
            s.pop();
        }
    }
}

int main(){
    return 0;
}