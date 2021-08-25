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

vector<int> spiral(Node *root){
    queue<Node*> q;
    q.push(root);
    stack<Node*>s;
    vector<int> res;
    bool flag=false;
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;++i){
            Node *curr=q.front();
            q.pop();
            if(flag){
                s.push(curr->data);
            }
            else{
                res.push_back(curr->data);
            }
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->righ!=NULL){
                q.push(curr->right);
            }
        }
        if(flag){
            while(!s.empty()){
                Node *temp=s.top();
                res.push_back(temp->data);
            }
        }
        flag=!flag;
    }
}

vector<int> spiral2(Node *root){
    vector<int> res;
    stack<Node* > s1,s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            Node *temp=s1.top();
            s1.pop();
            res.push_back(temp->data);
            if(temp->right!=NULL){
                s2.push(temp->right);
            }
            if(temp->left!=NULL){
                s2.push(temp->left);
            }
        }
        whil(!s2.empty()){
            Node *curr=s2.top();
            s2.pop();
            res.push_back(curr->data);
            if(curr->left!=NULL){
                s1.push(curr->left);
            }
            if(curr->right!=NULL){
                s1.push(curr->data);
            }
        }
    }
}

int main(){
    return 0;
}