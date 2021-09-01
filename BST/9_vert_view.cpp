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

void topView(Node *root){
    queue<pair<Node*, int>> q;
    q.push({root,0});
    while(!q.empty()){
        Node *cur=q.front().first;
        int index=q.front().second;
        q.pop();
        if(mp.find(index)==mp.end()){
            mp[index]=curr->data;
        }
        if(cur->left){
            q.push({curr->left,index-1});
        }
        if(cur->right){
            q.push(curr->right,index+1);
        }
    }
}

void topView(Node *root){
    queue<pair<Node*, int>> q;
    q.push({root,0});
    while(!q.empty()){
        Node *cur=q.front().first;
        int index=q.front().second;
        q.pop();
        mp[index]=curr->data;
        if(cur->left){
            q.push({curr->left,index-1});
        }
        if(cur->right){
            q.push(curr->right,index+1);
        }
    }
}


int main(){
    return 0;
}