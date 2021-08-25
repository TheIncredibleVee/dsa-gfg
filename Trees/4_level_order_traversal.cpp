
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


void level_order(Node * root, vector<int> res){
    queue<Node*> q;
    q.push(root);
    res.push_back(root->data);
    while(!q.empty()){
        Node *curr=q.front();
        res.push_back(curr->data);
        q.pop();
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}

void level_order_new_line(Node *root){
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        Node *curr=q.front();
        if(curr==NULL){
            cout<<endl;
            q.pop();
            continue;
        }
        cout<<curr->data<<"\t";
        q.pop();
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
        q.push(NULL);

    }
}

void level_order_newLine(Node *root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int count=q.size();
        while(cont--){
            Node *curr=q.front();
            if(curr->left!=NULL){
                q.push(cur->left);
            }
            if(curr->right!=NULL){
                q.push(cur->right);
            }
            cout<<curr->data;
        }
        cout<<endl;
    }

}

int main(){
    return 0;
}